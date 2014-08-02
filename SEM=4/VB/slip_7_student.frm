VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   5550
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   4500
   LinkTopic       =   "Form1"
   ScaleHeight     =   5550
   ScaleWidth      =   4500
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton cmdExit 
      Caption         =   "Exit"
      Height          =   495
      Left            =   3120
      TabIndex        =   8
      Top             =   4440
      Width           =   735
   End
   Begin VB.CommandButton cmdNext 
      Caption         =   "Next"
      Height          =   495
      Left            =   1920
      TabIndex        =   7
      Top             =   4440
      Width           =   735
   End
   Begin VB.CommandButton cmdPrev 
      Caption         =   "Previous"
      Height          =   495
      Left            =   480
      TabIndex        =   6
      Top             =   4440
      Width           =   975
   End
   Begin VB.CommandButton cmdSave 
      Caption         =   "Save"
      Height          =   495
      Left            =   2280
      TabIndex        =   5
      Top             =   3720
      Width           =   855
   End
   Begin VB.CommandButton cmdAdd 
      Caption         =   "Add"
      Height          =   495
      Left            =   1080
      TabIndex        =   4
      Top             =   3720
      Width           =   855
   End
   Begin VB.TextBox txtDOB 
      DataSource      =   "Adodc1"
      Height          =   375
      Left            =   2160
      TabIndex        =   3
      Top             =   2880
      Width           =   1575
   End
   Begin VB.TextBox txtClass 
      DataSource      =   "Adodc1"
      Height          =   405
      Left            =   2160
      TabIndex        =   2
      Top             =   2160
      Width           =   1575
   End
   Begin VB.TextBox txtSname 
      DataSource      =   "Adodc1"
      Height          =   405
      Left            =   2160
      TabIndex        =   1
      Top             =   1560
      Width           =   1575
   End
   Begin VB.TextBox txtRno 
      DataSource      =   "Adodc1"
      Height          =   405
      Left            =   2160
      TabIndex        =   0
      Top             =   840
      Width           =   1575
   End
   Begin VB.Label Label5 
      Caption         =   "Enter student details"
      Height          =   255
      Left            =   600
      TabIndex        =   13
      Top             =   360
      Width           =   1695
   End
   Begin VB.Label Label4 
      Caption         =   "Data of birth"
      Height          =   255
      Left            =   600
      TabIndex        =   12
      Top             =   3000
      Width           =   1095
   End
   Begin VB.Label Label3 
      Caption         =   "Enter name"
      Height          =   255
      Left            =   600
      TabIndex        =   11
      Top             =   1680
      Width           =   1095
   End
   Begin VB.Label Label2 
      Caption         =   "Enter  class name"
      Height          =   255
      Left            =   600
      TabIndex        =   10
      Top             =   2400
      Width           =   1335
   End
   Begin VB.Label Label1 
      Caption         =   "Ente roll no"
      Height          =   255
      Left            =   600
      TabIndex        =   9
      Top             =   840
      Width           =   975
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim C As New Connection
Dim R As New Recordset
Dim S As String
Private Sub cmdAdd_Click()
        txtRno.Text = ""
        txtSname.Text = ""
        txtClass.Text = ""
        txtDOB.Text = ""
      
        txtRno.SetFocus
End Sub

Private Sub cmdExit_Click()
End
End Sub

Private Sub cmdNext_Click()
    R.MoveNext
    If Not R.EOF Then
        
        txtRno.Text = R.Fields(0).Value
        txtSname.Text = R.Fields(1).Value
        txtClass.Text = R.Fields(2).Value
        txtDOB.Text = R.Fields(3).Value
    Else
        MsgBox "No More Records!", vbInformation, "Student"
    End If
End Sub
Private Sub cmdPrev_Click()
    R.MovePrevious
    If Not R.BOF Then
        txtRno.Text = R.Fields(0).Value
        txtSname.Text = R.Fields(1).Value
        txtClass.Text = R.Fields(2).Value
        txtDOB.Text = R.Fields(3).Value
    Else
        MsgBox "No More Records!", vbInformation, "Student"
    End If
End Sub
Private Sub cmdSave_Click()
        R.Close
        S = "Insert Into StudentTable Values(" & Val(txtRno.Text) & ",'" & txtSname.Text & "','" & txtClass.Text & "', '" & txtDOB.Text & "')"
        R.Open S, C, adOpenDynamic, adLockOptimistic
        S = "Select * From StudentTable"
        R.Open S, C, adOpenDynamic, adLockOptimistic
        If Not R.BOF And Not R.EOF Then
            R.MoveFirst
            txtRno.Text = R.Fields(0).Value
            txtSname.Text = R.Fields(1).Value
            txtClass.Text = R.Fields(2).Value
            txtDOB.Text = R.Fields(3).Value
        End If
            MsgBox "Student record Added Successfully!", vbInformation, "Student"
End Sub
Private Sub Form_Load()
    S = "Select * From StudentTable"
    C.Open "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\DeepJyoti\Documents\Student.mdb;Persist Security Info=False"
    R.Open S, C, adOpenDynamic, adLockOptimistic
            
    If Not R.BOF And Not R.EOF Then
        R.MoveFirst
        txtRno.Text = R.Fields(0).Value
        txtSname.Text = R.Fields(1).Value
        txtClass.Text = R.Fields(2).Value
        txtDOB.Text = R.Fields(3).Value
    End If
End Sub


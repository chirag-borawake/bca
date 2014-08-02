VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   5160
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   4515
   LinkTopic       =   "Form1"
   ScaleHeight     =   5160
   ScaleWidth      =   4515
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox txtCno 
      DataSource      =   "Adodc1"
      Height          =   405
      Left            =   2040
      TabIndex        =   8
      Top             =   720
      Width           =   1575
   End
   Begin VB.TextBox txtCName 
      DataSource      =   "Adodc1"
      Height          =   405
      Left            =   2040
      TabIndex        =   7
      Top             =   1440
      Width           =   1575
   End
   Begin VB.TextBox txtCAddr 
      DataSource      =   "Adodc1"
      Height          =   405
      Left            =   2040
      TabIndex        =   6
      Top             =   2040
      Width           =   1575
   End
   Begin VB.TextBox txtPhone 
      DataSource      =   "Adodc1"
      Height          =   375
      Left            =   2040
      TabIndex        =   5
      Top             =   2760
      Width           =   1575
   End
   Begin VB.CommandButton cmdAdd 
      Caption         =   "Add"
      Height          =   495
      Left            =   480
      TabIndex        =   4
      Top             =   3600
      Width           =   855
   End
   Begin VB.CommandButton cmdSave 
      Caption         =   "Save"
      Height          =   495
      Left            =   1680
      TabIndex        =   3
      Top             =   3600
      Width           =   855
   End
   Begin VB.CommandButton cmdPrev 
      Caption         =   "Previous"
      Height          =   495
      Left            =   360
      TabIndex        =   2
      Top             =   4320
      Width           =   975
   End
   Begin VB.CommandButton cmdNext 
      Caption         =   "Next"
      Height          =   495
      Left            =   1800
      TabIndex        =   1
      Top             =   4320
      Width           =   735
   End
   Begin VB.CommandButton cmdExit 
      Caption         =   "Exit"
      Height          =   495
      Left            =   3000
      TabIndex        =   0
      Top             =   4320
      Width           =   735
   End
   Begin VB.Label Label1 
      Caption         =   "Enter customer  no"
      Height          =   255
      Left            =   480
      TabIndex        =   13
      Top             =   720
      Width           =   1335
   End
   Begin VB.Label Label2 
      Caption         =   "Enter name"
      Height          =   255
      Left            =   480
      TabIndex        =   12
      Top             =   1440
      Width           =   855
   End
   Begin VB.Label Label3 
      Caption         =   "Enter address"
      Height          =   255
      Left            =   480
      TabIndex        =   11
      Top             =   2160
      Width           =   1095
   End
   Begin VB.Label Label4 
      Caption         =   "Phone number"
      Height          =   255
      Left            =   480
      TabIndex        =   10
      Top             =   2880
      Width           =   1095
   End
   Begin VB.Label Label5 
      Caption         =   "Enter customer details"
      Height          =   255
      Left            =   480
      TabIndex        =   9
      Top             =   240
      Width           =   1695
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
        txtCno.Text = ""
        txtCName.Text = ""
        txtCAddr.Text = ""
        txtPhone.Text = ""
        txtCno.SetFocus
End Sub

Private Sub cmdExit_Click()
End
End Sub

Private Sub cmdNext_Click()
    R.MoveNext
    If Not R.EOF Then
        
        txtCno.Text = R.Fields(0).Value
        txtCName.Text = R.Fields(1).Value
        txtCAddr.Text = R.Fields(2).Value
        txtPhone.Text = R.Fields(3).Value
    Else
        MsgBox "No More Records!", vbInformation, "Customer"
    End If
End Sub
Private Sub cmdPrev_Click()
    R.MovePrevious
    If Not R.BOF Then
        txtCno.Text = R.Fields(0).Value
        txtCName.Text = R.Fields(1).Value
        txtCAddr.Text = R.Fields(2).Value
        txtPhone.Text = R.Fields(3).Value
    Else
        MsgBox "No More Records!", vbInformation, "Customer"
    End If
End Sub

Private Sub cmdSave_Click()
        R.Close
        S = "Insert Into CustmerTable Values(" & Val(txtCno.Text) & ",'" & txtCName.Text & "','" & txtCAddr.Text & "', " & Val(txtPhone.Text) & ")"
        R.Open S, C, adOpenDynamic, adLockOptimistic
        S = "Select * From CustmerTable"
        R.Open S, C, adOpenDynamic, adLockOptimistic
        If Not R.BOF And Not R.EOF Then
            R.MoveFirst
            txtCno.Text = R.Fields(0).Value
            txtCName.Text = R.Fields(1).Value
            txtCAddr.Text = R.Fields(2).Value
            txtPhone.Text = R.Fields(3).Value
        End If
            MsgBox "Employee Added Successfully!", vbInformation, "Customer"
        
End Sub



Private Sub Form_Load()
    S = "Select * From CustmerTable"
    C.Open "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\DeepJyoti\Documents\Customer.mdb;Persist Security Info=False"
    R.Open S, C, adOpenDynamic, adLockOptimistic
            
    If Not R.BOF And Not R.EOF Then
        R.MoveFirst
        txtCno.Text = R.Fields(0).Value
        txtCName.Text = R.Fields(1).Value
        txtCAddr.Text = R.Fields(2).Value
        txtPhone.Text = R.Fields(3).Value
    End If
End Sub



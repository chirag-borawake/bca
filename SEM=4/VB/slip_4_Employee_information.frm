VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   5580
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   6675
   LinkTopic       =   "Form1"
   ScaleHeight     =   5580
   ScaleWidth      =   6675
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox txtEmpCode 
      DataSource      =   "Adodc1"
      Height          =   405
      Left            =   2400
      TabIndex        =   8
      Top             =   960
      Width           =   1575
   End
   Begin VB.TextBox txtEmpName 
      DataSource      =   "Adodc1"
      Height          =   405
      Left            =   2400
      TabIndex        =   7
      Top             =   1680
      Width           =   1575
   End
   Begin VB.TextBox txtEmpSal 
      DataSource      =   "Adodc1"
      Height          =   405
      Left            =   2400
      TabIndex        =   6
      Top             =   2280
      Width           =   1575
   End
   Begin VB.TextBox txtDOJ 
      DataSource      =   "Adodc1"
      Height          =   375
      Left            =   2400
      TabIndex        =   5
      Top             =   3000
      Width           =   1575
   End
   Begin VB.CommandButton cmdAdd 
      Caption         =   "Add"
      Height          =   495
      Left            =   1320
      TabIndex        =   4
      Top             =   3840
      Width           =   855
   End
   Begin VB.CommandButton cmdSave 
      Caption         =   "Save"
      Height          =   495
      Left            =   2520
      TabIndex        =   3
      Top             =   3840
      Width           =   855
   End
   Begin VB.CommandButton cmdPrev 
      Caption         =   "Previous"
      Height          =   495
      Left            =   720
      TabIndex        =   2
      Top             =   4560
      Width           =   975
   End
   Begin VB.CommandButton cmdNext 
      Caption         =   "Next"
      Height          =   495
      Left            =   2160
      TabIndex        =   1
      Top             =   4560
      Width           =   735
   End
   Begin VB.CommandButton cmdExit 
      Caption         =   "Exit"
      Height          =   495
      Left            =   3360
      TabIndex        =   0
      Top             =   4560
      Width           =   735
   End
   Begin VB.Label Label1 
      Caption         =   "Enter code"
      Height          =   255
      Left            =   840
      TabIndex        =   13
      Top             =   960
      Width           =   975
   End
   Begin VB.Label Label2 
      Caption         =   "Enter name"
      Height          =   255
      Left            =   840
      TabIndex        =   12
      Top             =   1680
      Width           =   855
   End
   Begin VB.Label Label3 
      Caption         =   "Enter salary"
      Height          =   255
      Left            =   840
      TabIndex        =   11
      Top             =   2400
      Width           =   1095
   End
   Begin VB.Label Label4 
      Caption         =   "Data of birth"
      Height          =   255
      Left            =   840
      TabIndex        =   10
      Top             =   3120
      Width           =   1095
   End
   Begin VB.Label Label5 
      Caption         =   "Enter employeer details"
      Height          =   255
      Left            =   840
      TabIndex        =   9
      Top             =   480
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
        txtEmpCode.Text = ""
        txtEmpName.Text = ""
        txtEmpSal.Text = ""
        txtDOJ.Text = ""
        txtEmpCode.SetFocus
End Sub

Private Sub cmdExit_Click()
End
End Sub

Private Sub cmdNext_Click()
    R.MoveNext
    If Not R.EOF Then
        
        txtEmpCode.Text = R.Fields(0).Value
        txtEmpName.Text = R.Fields(1).Value
        txtEmpSal.Text = R.Fields(2).Value
        txtDOJ.Text = R.Fields(3).Value
    Else
        MsgBox "No More Records!", vbInformation, "Employee"
    End If
End Sub
Private Sub cmdPrev_Click()
    R.MovePrevious
    If Not R.BOF Then
        txtEmpCode.Text = R.Fields(0).Value
        txtEmpName.Text = R.Fields(1).Value
        txtEmpSal.Text = R.Fields(2).Value
        txtDOJ.Text = R.Fields(3).Value
    Else
        MsgBox "No More Records!", vbInformation, "Employee"
    End If
End Sub
Private Sub cmdSave_Click()
        R.Close
        S = "Insert Into EmployeeTable Values(" & Val(txtEmpCode.Text) & ",'" & txtEmpName.Text & "'," & Val(txtEmpSal.Text) & ", '" & txtDOJ.Text & "')"
        'R.Open S, C, adOpenDynamic, adLockOptimistic
        S = "Select * From EmployeeTable"
        R.Open S, C, adOpenDynamic, adLockOptimistic
        If Not R.BOF And Not R.EOF Then
            R.MoveFirst
            'txtEmpCode.Text = R.Fields(0).Value
            'txtEmpName.Text = R.Fields(1).Value
            'txtEmpSal.Text = R.Fields(2).Value
            'txtDOJ.Text = R.Fields(3).Value
            
             R.Fields(0).Value = txtEmpCode.Text
             R.Fields(1).Value = txtEmpName.Text
             R.Fields(2).Value = txtEmpSal.Text
             R.Fields(3).Value = txtDOJ.Text

        End If
            MsgBox "Employee Added Successfully!", vbInformation, "Employee"
End Sub
Private Sub Form_Load()
    'S = "Select * From EmployeeTable"
     C.Open "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\DeepJyoti\Documents\Employee.mdb;Persist Security Info=False"
    S = "Select * From EmployeeTable"
    R.Open S, C, adOpenDynamic, adLockOptimistic
            
    If Not R.BOF And Not R.EOF Then
        R.MoveFirst
        txtEmpCode.Text = R.Fields(0).Value
        txtEmpName.Text = R.Fields(1).Value
        txtEmpSal.Text = R.Fields(2).Value
        txtDOJ.Text = R.Fields(3).Value
    End If
End Sub


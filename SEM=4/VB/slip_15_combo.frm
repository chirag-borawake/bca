VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   4200
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   3945
   LinkTopic       =   "Form1"
   ScaleHeight     =   4200
   ScaleWidth      =   3945
   StartUpPosition =   3  'Windows Default
   Begin VB.ComboBox Combo1 
      Height          =   315
      Left            =   2160
      TabIndex        =   8
      Text            =   "Combo1"
      Top             =   600
      Width           =   1455
   End
   Begin VB.CommandButton cmdExit 
      Caption         =   "Exit"
      Height          =   495
      Left            =   1080
      TabIndex        =   7
      Top             =   3600
      Width           =   1215
   End
   Begin VB.TextBox txtEmpSal 
      Height          =   495
      Left            =   2160
      TabIndex        =   6
      Text            =   " "
      Top             =   2160
      Width           =   1215
   End
   Begin VB.TextBox txtDOJ 
      Height          =   495
      Left            =   2160
      TabIndex        =   5
      Text            =   " "
      Top             =   3000
      Width           =   1215
   End
   Begin VB.TextBox txtEmpName 
      Height          =   495
      Left            =   2160
      TabIndex        =   4
      Text            =   " "
      Top             =   1320
      Width           =   1215
   End
   Begin VB.Label Label4 
      Caption         =   "Employee address"
      Height          =   375
      Left            =   240
      TabIndex        =   3
      Top             =   3000
      Width           =   1335
   End
   Begin VB.Label Label3 
      Caption         =   "Emplpyee salary"
      Height          =   375
      Left            =   240
      TabIndex        =   2
      Top             =   2160
      Width           =   1335
   End
   Begin VB.Label Label2 
      Caption         =   "Employee name"
      Height          =   255
      Left            =   240
      TabIndex        =   1
      Top             =   1440
      Width           =   1335
   End
   Begin VB.Label Label1 
      Caption         =   "Employee code"
      Height          =   255
      Left            =   240
      TabIndex        =   0
      Top             =   720
      Width           =   1215
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
Private Sub cmdExit_Click()
Unload Me
End Sub

Private Sub Combo1_Click()
    R.Close
    sql = "select * from EmployeeTable where (ecode=" & Val(Combo1.Text) & ")"
    R.Open sql, C, adOpenDynamic, adLockOptimistic
        If Not R.BOF And Not R.EOF Then
            R.MoveFirst
            txtEmpName.Text = R.Fields(1).Value
            txtEmpSal.Text = R.Fields(2).Value
            txtDOJ.Text = R.Fields(3).Value
        End If
End Sub

Private Sub Form_Load()
    S = "Select * From EmployeeTable"
    C.Open "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\DeepJyoti\Documents\Employee.mdb;Persist Security Info=False"
    R.Open S, C, adOpenDynamic, adLockOptimistic
      
    If Not R.BOF And Not R.EOF Then
        R.MoveFirst
        While Not R.EOF
            Combo1.AddItem R.Fields(0).Value
            R.MoveNext
        Wend
    End If
     End Sub


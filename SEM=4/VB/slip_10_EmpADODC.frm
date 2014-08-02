VERSION 5.00
Object = "{67397AA1-7FB1-11D0-B148-00A0C922E820}#6.0#0"; "MSADODC.OCX"
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   3600
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   7650
   LinkTopic       =   "Form1"
   ScaleHeight     =   3600
   ScaleWidth      =   7650
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Exit 
      Caption         =   "Exit"
      Height          =   375
      Left            =   6000
      TabIndex        =   11
      Top             =   2040
      Width           =   855
   End
   Begin VB.CommandButton Print 
      Caption         =   "Print"
      Height          =   375
      Left            =   4560
      TabIndex        =   10
      Top             =   2040
      Width           =   855
   End
   Begin VB.CommandButton Save 
      Caption         =   "Save"
      Height          =   375
      Left            =   6000
      TabIndex        =   9
      Top             =   1320
      Width           =   855
   End
   Begin VB.CommandButton Add 
      Caption         =   "Add"
      Height          =   375
      Left            =   4560
      TabIndex        =   8
      Top             =   1320
      Width           =   855
   End
   Begin MSAdodcLib.Adodc Adodc1 
      Height          =   375
      Left            =   4680
      Top             =   480
      Width           =   1815
      _ExtentX        =   3201
      _ExtentY        =   661
      ConnectMode     =   0
      CursorLocation  =   3
      IsolationLevel  =   -1
      ConnectionTimeout=   15
      CommandTimeout  =   30
      CursorType      =   3
      LockType        =   3
      CommandType     =   2
      CursorOptions   =   0
      CacheSize       =   50
      MaxRecords      =   0
      BOFAction       =   0
      EOFAction       =   0
      ConnectStringType=   1
      Appearance      =   1
      BackColor       =   -2147483643
      ForeColor       =   -2147483640
      Orientation     =   0
      Enabled         =   -1
      Connect         =   "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\DeepJyoti\Documents\Employee.mdb;Persist Security Info=False"
      OLEDBString     =   "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\DeepJyoti\Documents\Employee.mdb;Persist Security Info=False"
      OLEDBFile       =   ""
      DataSourceName  =   ""
      OtherAttributes =   ""
      UserName        =   ""
      Password        =   ""
      RecordSource    =   "EmployeeTable"
      Caption         =   "Adodc1"
      BeginProperty Font {0BE35203-8F91-11CE-9DE3-00AA004BB851} 
         Name            =   "MS Sans Serif"
         Size            =   8.25
         Charset         =   0
         Weight          =   400
         Underline       =   0   'False
         Italic          =   0   'False
         Strikethrough   =   0   'False
      EndProperty
      _Version        =   393216
   End
   Begin VB.TextBox Text4 
      DataField       =   "address"
      DataSource      =   "Adodc1"
      Height          =   405
      Left            =   2400
      TabIndex        =   7
      Text            =   " "
      Top             =   2520
      Width           =   1455
   End
   Begin VB.TextBox Text3 
      DataField       =   "sal"
      DataSource      =   "Adodc1"
      Height          =   375
      Left            =   2400
      TabIndex        =   6
      Text            =   " "
      Top             =   1920
      Width           =   1455
   End
   Begin VB.TextBox Text2 
      DataField       =   "ename"
      DataSource      =   "Adodc1"
      Height          =   375
      Left            =   2400
      TabIndex        =   5
      Text            =   " "
      Top             =   1200
      Width           =   1455
   End
   Begin VB.TextBox Text1 
      DataField       =   "ecode"
      DataSource      =   "Adodc1"
      Height          =   375
      Left            =   2400
      TabIndex        =   4
      Text            =   " "
      Top             =   480
      Width           =   1455
   End
   Begin VB.Label Label4 
      Caption         =   "Enter employee address"
      Height          =   255
      Left            =   360
      TabIndex        =   3
      Top             =   2640
      Width           =   1695
   End
   Begin VB.Label Label3 
      Caption         =   "Enter employee salary"
      Height          =   255
      Left            =   360
      TabIndex        =   2
      Top             =   1920
      Width           =   1575
   End
   Begin VB.Label Label2 
      Caption         =   "Enter employee name"
      Height          =   255
      Left            =   360
      TabIndex        =   1
      Top             =   1320
      Width           =   1575
   End
   Begin VB.Label Label1 
      Caption         =   "Enter employee code"
      Height          =   255
      Left            =   360
      TabIndex        =   0
      Top             =   600
      Width           =   1575
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Add_Click()
Adodc1.Recordset.AddNew
Text1.SetFocus
End Sub

Private Sub Exit_Click()
End
End Sub

Private Sub Print_Click()
DataReport1.Show
End Sub

Private Sub Save_Click()
Adodc1.Recordset.Fields(0) = Text1.Text
Adodc1.Recordset.Fields(1) = Text2.Text
Adodc1.Recordset.Fields(2) = Text3.Text
Adodc1.Recordset.Fields(3) = Text4.Text
Adodc1.Recordset.MoveNext
Adodc1.Refresh
End Sub

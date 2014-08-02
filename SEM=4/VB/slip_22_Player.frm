VERSION 5.00
Object = "{67397AA1-7FB1-11D0-B148-00A0C922E820}#6.0#0"; "MSADODC.OCX"
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   5235
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   4725
   LinkTopic       =   "Form1"
   ScaleHeight     =   5235
   ScaleWidth      =   4725
   StartUpPosition =   3  'Windows Default
   Begin MSAdodcLib.Adodc Adodc1 
      Height          =   375
      Left            =   1080
      Top             =   3600
      Width           =   2055
      _ExtentX        =   3625
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
      Connect         =   "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\DeepJyoti\Documents\Player.mdb;Persist Security Info=False"
      OLEDBString     =   "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\DeepJyoti\Documents\Player.mdb;Persist Security Info=False"
      OLEDBFile       =   ""
      DataSourceName  =   ""
      OtherAttributes =   ""
      UserName        =   ""
      Password        =   ""
      RecordSource    =   "PlayerTable"
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
   Begin VB.CommandButton cmdExit 
      Caption         =   "Exit"
      Height          =   495
      Left            =   3240
      TabIndex        =   6
      Top             =   4320
      Width           =   735
   End
   Begin VB.CommandButton cmdSave 
      Caption         =   "Save"
      Height          =   495
      Left            =   1800
      TabIndex        =   5
      Top             =   4320
      Width           =   855
   End
   Begin VB.CommandButton cmdAdd 
      Caption         =   "Add"
      Height          =   495
      Left            =   600
      TabIndex        =   4
      Top             =   4320
      Width           =   855
   End
   Begin VB.TextBox txtNOM 
      DataField       =   "nom"
      DataSource      =   "Adodc1"
      Height          =   375
      Left            =   2040
      TabIndex        =   3
      Top             =   2880
      Width           =   1575
   End
   Begin VB.TextBox txtPaddr 
      DataField       =   "paddr"
      DataSource      =   "Adodc1"
      Height          =   405
      Left            =   2040
      TabIndex        =   2
      Top             =   2160
      Width           =   1575
   End
   Begin VB.TextBox txtPname 
      DataField       =   "pname"
      DataSource      =   "Adodc1"
      Height          =   405
      Left            =   2040
      TabIndex        =   1
      Top             =   1560
      Width           =   1575
   End
   Begin VB.TextBox txtPcode 
      DataField       =   "pcode"
      DataSource      =   "Adodc1"
      Height          =   405
      Left            =   2040
      TabIndex        =   0
      Top             =   840
      Width           =   1575
   End
   Begin VB.Label Label5 
      Caption         =   "Enter players details"
      Height          =   255
      Left            =   480
      TabIndex        =   11
      Top             =   360
      Width           =   1695
   End
   Begin VB.Label Label4 
      Caption         =   "No of matches played"
      Height          =   375
      Left            =   480
      TabIndex        =   10
      Top             =   2880
      Width           =   1215
   End
   Begin VB.Label Label3 
      Caption         =   "Enter address"
      Height          =   255
      Left            =   480
      TabIndex        =   9
      Top             =   2280
      Width           =   1095
   End
   Begin VB.Label Label2 
      Caption         =   "Enter name"
      Height          =   255
      Left            =   480
      TabIndex        =   8
      Top             =   1560
      Width           =   855
   End
   Begin VB.Label Label1 
      Caption         =   "Enter code"
      Height          =   255
      Left            =   480
      TabIndex        =   7
      Top             =   840
      Width           =   1335
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
        txtPcode.Text = ""
        txtPname.Text = ""
        txtPaddr.Text = ""
        txtNOM.Text = ""
      
        txtPcode.SetFocus
End Sub

Private Sub cmdExit_Click()
End
End Sub

Private Sub cmdNext_Click()
    R.MoveNext
    If Not R.EOF Then
        txtPcode.Text = R.Fields(0).Value
        txtPname.Text = R.Fields(1).Value
        txtPaddr.Text = R.Fields(2).Value
        txtNOM.Text = R.Fields(3).Value
    Else
        MsgBox "No More Records!", vbInformation, "Player"
    End If
End Sub
Private Sub cmdPrev_Click()
    R.MovePrevious
    If Not R.BOF Then
        txtPcode.Text = R.Fields(0).Value
        txtPname.Text = R.Fields(1).Value
        txtPaddr.Text = R.Fields(2).Value
        txtNOM.Text = R.Fields(3).Value
    Else
        MsgBox "No More Records!", vbInformation, "Player"
    End If
End Sub
Private Sub cmdSave_Click()
        R.Close
        S = "Insert Into PlayerTable Values(" & Val(txtPcode.Text) & ",'" & txtPname.Text & "','" & txtPaddr.Text & "', '" & Val(txtNOM.Text) & "')"
        R.Open S, C, adOpenDynamic, adLockOptimistic
        S = "Select * From PlayerTable"
        R.Open S, C, adOpenDynamic, adLockOptimistic
        If Not R.BOF And Not R.EOF Then
            R.MoveFirst
            txtPcode.Text = R.Fields(0).Value
            txtPname.Text = R.Fields(1).Value
            txtPaddr.Text = R.Fields(2).Value
            txtNOM.Text = R.Fields(3).Value
        End If
            MsgBox "Player record Added Successfully!", vbInformation, "Player"
End Sub
Private Sub Form_Load()
    S = "Select * From PlayerTable"
    C.Open "Provider=Microsoft.Jet.OLEDB.4.0;Data Source=C:\Users\DeepJyoti\Documents\Player.mdb;Persist Security Info=False"
    R.Open S, C, adOpenDynamic, adLockOptimistic
    If Not R.BOF And Not R.EOF Then
        R.MoveFirst
        txtPcode.Text = R.Fields(0).Value
        txtPname.Text = R.Fields(1).Value
        txtPaddr.Text = R.Fields(2).Value
        txtNOM.Text = R.Fields(3).Value
    End If
End Sub



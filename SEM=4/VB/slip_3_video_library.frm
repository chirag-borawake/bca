VERSION 5.00
Begin VB.Form Form1 
   BorderStyle     =   5  'Sizable ToolWindow
   Caption         =   "Form1"
   ClientHeight    =   7680
   ClientLeft      =   120
   ClientTop       =   390
   ClientWidth     =   4425
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   7680
   ScaleWidth      =   4425
   ShowInTaskbar   =   0   'False
   StartUpPosition =   3  'Windows Default
   Begin VB.Frame Frame1 
      Caption         =   "Member informatio"
      Height          =   7455
      Left            =   120
      TabIndex        =   0
      Top             =   120
      Width           =   4215
      Begin VB.CommandButton Command2 
         Caption         =   "Cancel"
         Height          =   435
         Left            =   2280
         TabIndex        =   19
         Top             =   6600
         Width           =   1335
      End
      Begin VB.CommandButton Command1 
         Caption         =   "Calculate"
         Height          =   435
         Left            =   480
         TabIndex        =   18
         Top             =   6600
         Width           =   1455
      End
      Begin VB.TextBox Text5 
         Height          =   375
         Left            =   1920
         TabIndex        =   17
         Text            =   " "
         Top             =   5880
         Width           =   1215
      End
      Begin VB.TextBox Text4 
         Height          =   405
         Left            =   1920
         TabIndex        =   15
         Top             =   5160
         Width           =   1215
      End
      Begin VB.TextBox Text3 
         Height          =   405
         Left            =   1920
         TabIndex        =   14
         Top             =   4560
         Width           =   1215
      End
      Begin VB.CheckBox Check1 
         Caption         =   "Home delivery"
         Height          =   375
         Left            =   960
         TabIndex        =   11
         Top             =   4080
         Width           =   1335
      End
      Begin VB.Frame Frame2 
         Caption         =   "Libreary infomation[CD/DVD]"
         Height          =   975
         Left            =   240
         TabIndex        =   7
         Top             =   2760
         Width           =   3615
         Begin VB.OptionButton Option5 
            Caption         =   "Oal"
            Height          =   255
            Left            =   2280
            TabIndex        =   10
            Top             =   480
            Width           =   1095
         End
         Begin VB.OptionButton Option4 
            Caption         =   "New"
            Height          =   255
            Left            =   1320
            TabIndex        =   9
            Top             =   480
            Width           =   1095
         End
         Begin VB.OptionButton Option3 
            Caption         =   "Latest"
            Height          =   255
            Left            =   240
            TabIndex        =   8
            Top             =   480
            Width           =   855
         End
      End
      Begin VB.OptionButton Option2 
         Caption         =   "Non - member"
         Height          =   435
         Left            =   2160
         TabIndex        =   6
         Top             =   2040
         Width           =   1335
      End
      Begin VB.OptionButton Option1 
         Caption         =   "Member"
         Height          =   375
         Left            =   480
         TabIndex        =   5
         Top             =   2040
         Width           =   975
      End
      Begin VB.TextBox Text2 
         Height          =   405
         Left            =   1680
         TabIndex        =   4
         Top             =   1320
         Width           =   1455
      End
      Begin VB.TextBox Text1 
         Height          =   375
         Left            =   1680
         TabIndex        =   2
         Top             =   600
         Width           =   1575
      End
      Begin VB.Label Label5 
         Caption         =   "Total amount:"
         Height          =   375
         Left            =   360
         TabIndex        =   16
         Top             =   5880
         Width           =   1095
      End
      Begin VB.Label Label4 
         Caption         =   "Data of returring"
         Height          =   255
         Left            =   360
         TabIndex        =   13
         Top             =   5160
         Width           =   1215
      End
      Begin VB.Label Label3 
         Caption         =   "Data of borroving"
         Height          =   375
         Left            =   360
         TabIndex        =   12
         Top             =   4560
         Width           =   1575
      End
      Begin VB.Label Label2 
         Caption         =   "Enter address:"
         Height          =   375
         Left            =   360
         TabIndex        =   3
         Top             =   1320
         Width           =   1215
      End
      Begin VB.Label Label1 
         Caption         =   "Enter name:"
         Height          =   255
         Left            =   360
         TabIndex        =   1
         Top             =   600
         Width           =   975
      End
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim borrow As Date
Dim ret As Date
Dim amount As Integer
Dim diff As Integer
Private Sub Command1_Click()
borrow = Text3.Text
ret = Text4.Text
If Option1.Value = True Then
    If Option3.Value = True Then
        If Check1.Value = Checked Then
            diff = DateDiff("d", borrow, ret)
            amount = amount + (30 * diff) + 10
            Text5.Text = amount
        Else
        diff = DateDiff("d", borrow, ret)
        amount = amount + (30 * diff)
        Text5.Text = amount
        End If
    End If
    
    If Option4.Value = True Then
        If Check1.Value = Checked Then
            diff = DateDiff("d", borrow, ret)
            amount = amount + (20 * diff) + 10
            Text5.Text = amount
        Else
        diff = DateDiff("d", borrow, ret)
        amount = amount + (20 * diff)
        Text5.Text = amount
        End If
    End If
    
    If Option5.Value = True Then
        If Check1.Value = Checked Then
            diff = DateDiff("d", borrow, ret)
            amount = amount + (10 * diff) + 10
            Text5.Text = amount
        Else
        diff = DateDiff("d", borrow, ret)
        amount = amount + (10 * diff)
        Text5.Text = amount
        End If
    End If
End If

If Option2.Value = True Then
    If Option3.Value = True Then
        If Check1.Value = Checked Then
            diff = DateDiff("d", borrow, ret)
            amount = amount + (40 * diff) + 20
            Text5.Text = amount
        Else
        diff = DateDiff("d", borrow, ret)
        amount = amount + (40 * diff)
        Text5.Text = amount
        End If
    End If
    
    If Option4.Value = True Then
        If Check1.Value = Checked Then
            diff = DateDiff("d", borrow, ret)
            amount = amount + (30 * diff) + 10
            Text5.Text = amount
        Else
        diff = DateDiff("d", borrow, ret)
        amount = amount + (30 * diff)
        Text5.Text = amount
        End If
    End If
    
    If Option5.Value = True Then
        If Check1.Value = Checked Then
            diff = DateDiff("d", borrow, ret)
            amount = amount + (20 * diff) + 10
            Text5.Text = amount
        Else
        diff = DateDiff("d", borrow, ret)
        amount = amount + (20 * diff)
        Text5.Text = amount
        End If
    End If
End If
End Sub

Private Sub Command2_Click()
End
End Sub

Private Sub Form_Load()
Option1.Value = False
Option2.Value = False
Option3.Value = False
Option4.Value = False
Option5.Value = False
End Sub

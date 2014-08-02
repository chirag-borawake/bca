VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   5055
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   5805
   LinkTopic       =   "Form1"
   ScaleHeight     =   5055
   ScaleWidth      =   5805
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text4 
      Height          =   495
      Left            =   3120
      TabIndex        =   5
      Text            =   "  "
      Top             =   2880
      Width           =   1215
   End
   Begin VB.CommandButton Command2 
      Caption         =   "End"
      Height          =   495
      Left            =   3240
      TabIndex        =   4
      Top             =   3840
      Width           =   1215
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Find"
      Height          =   495
      Left            =   1200
      TabIndex        =   3
      Top             =   3840
      Width           =   1215
   End
   Begin VB.TextBox Text3 
      Height          =   495
      Left            =   3120
      TabIndex        =   2
      Text            =   " "
      Top             =   2160
      Width           =   1215
   End
   Begin VB.TextBox Text2 
      Height          =   495
      Left            =   3120
      TabIndex        =   1
      Text            =   " "
      Top             =   1440
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      Height          =   495
      Left            =   3120
      TabIndex        =   0
      Text            =   " "
      Top             =   600
      Width           =   1215
   End
   Begin VB.Label Label4 
      Caption         =   "Double click"
      Height          =   255
      Left            =   1560
      TabIndex        =   9
      Top             =   3000
      Width           =   1215
   End
   Begin VB.Label Label3 
      Caption         =   "Rigth click"
      Height          =   255
      Left            =   1560
      TabIndex        =   8
      Top             =   2280
      Width           =   1215
   End
   Begin VB.Label Label2 
      Caption         =   " Left click"
      Height          =   255
      Left            =   1440
      TabIndex        =   7
      Top             =   1560
      Width           =   1215
   End
   Begin VB.Label Label1 
      Caption         =   "Mouse position"
      Height          =   255
      Left            =   1440
      TabIndex        =   6
      Top             =   720
      Width           =   1215
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False

Dim cnt As Integer
Dim cnt1 As Integer
Dim cnt2 As Integer
Private Sub Command1_Click()
Text2.Text = cnt
Text3.Text = cnt1
Text4.Text = cnt2
End Sub
Private Sub Command2_Click()
End
End Sub

Private Sub Form_DblClick()
cnt2 = cnt2 + 1
Text4.Text = cnt
End Sub

Private Sub Form_Load()
cnt = 0
cnt1 = 0
End Sub

Private Sub Form_MouseDown(Button As Integer, Shift As Integer, X As Single, Y As Single)
If Button = vbLeftButton Then
cnt = cnt + 1
Text2.Text = cnt
End If
If Button = vbRightButton Then
cnt1 = cnt1 + 1
Text3.Text = cnt
End If
End Sub

Private Sub Form_MouseMove(Button As Integer, Shift As Integer, X As Single, Y As Single)
Dim strpos As String
Dim xpos As Integer
Dim ypos As Integer
xpos = X
ypos = Y
strpos = "x:" & xpos & "y:" & ypos
Text1.Text = strpos
End Sub

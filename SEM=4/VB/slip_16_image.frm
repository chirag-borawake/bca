VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   6195
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   7680
   LinkTopic       =   "Form1"
   ScaleHeight     =   6195
   ScaleWidth      =   7680
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Command1 
      Caption         =   "End"
      Height          =   495
      Left            =   4080
      TabIndex        =   1
      Top             =   3720
      Width           =   1215
   End
   Begin VB.CommandButton Reset 
      Caption         =   "Reset"
      Height          =   495
      Left            =   1920
      TabIndex        =   0
      Top             =   4560
      Width           =   1215
   End
   Begin VB.Image Image1 
      DragMode        =   1  'Automatic
      Height          =   495
      Index           =   2
      Left            =   2520
      Picture         =   "slip_16_image.frx":0000
      Stretch         =   -1  'True
      Top             =   2040
      Width           =   1215
   End
   Begin VB.Image Image1 
      DragMode        =   1  'Automatic
      Height          =   495
      Index           =   1
      Left            =   4320
      Picture         =   "slip_16_image.frx":CE881
      Stretch         =   -1  'True
      Top             =   2040
      Width           =   1215
   End
   Begin VB.Image Image1 
      DragMode        =   1  'Automatic
      Height          =   495
      Index           =   0
      Left            =   600
      Picture         =   "slip_16_image.frx":15FDE1
      Stretch         =   -1  'True
      Top             =   2040
      Width           =   1215
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
End
End Sub

Private Sub Form_DragDrop(Source As Control, X As Single, Y As Single)
Source.Visible = False
End Sub

Private Sub Reset_Click()
For i = 0 To 2
Image1(i).Visible = True
Next
End Sub

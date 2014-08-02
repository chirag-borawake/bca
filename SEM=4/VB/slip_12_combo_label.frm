VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   3030
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   4560
   LinkTopic       =   "Form1"
   ScaleHeight     =   3030
   ScaleWidth      =   4560
   StartUpPosition =   3  'Windows Default
   Begin VB.ComboBox Combo2 
      Height          =   315
      Left            =   3120
      TabIndex        =   1
      Text            =   "Combo2"
      Top             =   1200
      Width           =   1215
   End
   Begin VB.ComboBox Combo1 
      Height          =   315
      Left            =   1080
      TabIndex        =   0
      Text            =   "Combo1"
      Top             =   1320
      Width           =   1215
   End
   Begin VB.Label Label1 
      Caption         =   "Label1"
      Height          =   495
      Left            =   1080
      TabIndex        =   2
      Top             =   480
      Width           =   1215
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Combo1_Click()
For i = 0 To Combo1.ListCount - 1
If Combo1.ListIndex = 0 Then
  Label1.BackColor = vbRed
ElseIf Combo1.ListIndex = 1 Then
  Label1.BackColor = vbYellow
ElseIf Combo1.ListIndex = 2 Then
  Label1.BackColor = vbGreen
Else
  Label1.BackColor = vbBlue
End If
Next
End Sub
Private Sub Combo2_Click()
For i = 0 To Combo2.ListCount - 1
If Combo2.ListIndex = 0 Then
  Label1.Caption = "Red"
ElseIf Combo2.ListIndex = 1 Then
  Label1.Caption = "Yellow"
ElseIf Combo2.ListIndex = 2 Then
  Label1.Caption = "Green"
Else
  Label1.Caption = "Blue"
End If
Next
End Sub
Private Sub Form_Load()
Combo1.AddItem "Red"
Combo1.AddItem "Yellow"
Combo1.AddItem "Green"
Combo1.AddItem "Blue"
Combo2.AddItem "Red"
Combo2.AddItem "Yellow"
Combo2.AddItem "Green"
Combo2.AddItem "Blue"
End Sub


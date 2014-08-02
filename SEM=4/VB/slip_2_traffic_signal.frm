VERSION 5.00
Begin VB.Form Form4 
   Caption         =   "Form4"
   ClientHeight    =   5040
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   5115
   LinkTopic       =   "Form4"
   ScaleHeight     =   5040
   ScaleWidth      =   5115
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Exit 
      Caption         =   "Exit"
      Height          =   495
      Left            =   2640
      TabIndex        =   7
      Top             =   3360
      Width           =   1455
   End
   Begin VB.Timer Timer1 
      Interval        =   1000
      Left            =   3000
      Top             =   4200
   End
   Begin VB.CommandButton Stop_Signal 
      Caption         =   "Stop"
      Height          =   495
      Left            =   2640
      TabIndex        =   5
      Top             =   2520
      Width           =   1455
   End
   Begin VB.CommandButton Start_Signal 
      Caption         =   "Start"
      Height          =   495
      Left            =   2640
      TabIndex        =   4
      Top             =   1680
      Width           =   1455
   End
   Begin VB.Frame Frame1 
      Caption         =   "Signal"
      Height          =   3855
      Left            =   600
      TabIndex        =   0
      Top             =   840
      Width           =   1575
      Begin VB.TextBox Text3 
         Height          =   855
         Left            =   360
         TabIndex        =   3
         Top             =   2760
         Width           =   855
      End
      Begin VB.TextBox Text2 
         Height          =   855
         Left            =   360
         TabIndex        =   2
         Top             =   1680
         Width           =   855
      End
      Begin VB.TextBox Text1 
         Height          =   855
         Left            =   360
         TabIndex        =   1
         Top             =   480
         Width           =   855
      End
   End
   Begin VB.Label Label1 
      Caption         =   "Traffic signal"
      Height          =   375
      Left            =   720
      TabIndex        =   6
      Top             =   240
      Width           =   1215
   End
End
Attribute VB_Name = "Form4"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim counter As Single
Private Sub Exit_Click()
End
End Sub

Private Sub Form_Load()
Timer1.Enabled = False
End Sub

Private Sub Start_Signal_Click()
Timer1.Enabled = True
Call Timer1_Timer
End Sub

Private Sub Stop_Signal_Click()
Timer1.Enabled = False
Text1.BackColor = vbWhite
Text2.BackColor = vbYellow
Text3.BackColor = vbWhite
End Sub

Private Sub Timer1_Timer()
counter = counter + 1
If counter = 4 Then
counter = 1
End If
If counter = 1 Then
Text1.BackColor = vbRed
Text2.BackColor = vbWhite
Text3.BackColor = vbWhite
End If

If counter = 2 Then
Text1.BackColor = vbWhite
Text2.BackColor = vbYellow
Text3.BackColor = vbWhite
End If

If counter = 3 Then
Text1.BackColor = vbWhite
Text2.BackColor = vbWhite
Text3.BackColor = vbGreen
End If
End Sub

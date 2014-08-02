VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   3630
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   8190
   LinkTopic       =   "Form1"
   ScaleHeight     =   3630
   ScaleWidth      =   8190
   StartUpPosition =   3  'Windows Default
   Begin VB.Timer Timer1 
      Interval        =   1000
      Left            =   3360
      Top             =   2520
   End
   Begin VB.CommandButton Reset 
      Caption         =   "Reset"
      Height          =   375
      Left            =   5880
      TabIndex        =   5
      Top             =   2040
      Width           =   1215
   End
   Begin VB.CommandButton Play 
      Caption         =   "Play"
      Height          =   495
      Left            =   3480
      TabIndex        =   4
      Top             =   1920
      Width           =   1575
   End
   Begin VB.CommandButton Pause 
      Caption         =   "Pause"
      Height          =   495
      Left            =   600
      TabIndex        =   3
      Top             =   1920
      Width           =   1935
   End
   Begin VB.CommandButton Stot 
      Caption         =   "Stop"
      Height          =   495
      Left            =   5520
      TabIndex        =   2
      Top             =   720
      Width           =   1935
   End
   Begin VB.CommandButton Start 
      Caption         =   "Start"
      Height          =   495
      Left            =   3120
      TabIndex        =   1
      Top             =   720
      Width           =   1695
   End
   Begin VB.Label Label1 
      Height          =   375
      Left            =   480
      TabIndex        =   0
      Top             =   720
      Width           =   1815
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim startTime As Date
Dim s As String

Private Sub Form_Load()
Timer1.Enabled = False
End Sub

Private Sub Pause_Click()
If Pause.Caption = "Pause" Then
Timer1.Enabled = False
s = Label1.Caption
End If
End Sub

Private Sub Play_Click()
If Play.Caption = "Play" Then
Timer1.Enabled = True
End If
End Sub

Private Sub Reset_Click()
startTime = Now
Timer1.Enabled = True
End Sub

Private Sub Start_Click()
startTime = Now
Timer1.Enabled = True
End Sub

Private Sub Stot_Click()
End
End Sub

Private Sub Timer1_Timer()
Label1.Caption = Format(Now - startTime, "hh:mm:ss:ms")
End Sub

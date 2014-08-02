VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   5070
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   3120
   LinkTopic       =   "Form1"
   ScaleHeight     =   5070
   ScaleWidth      =   3120
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Exit_Button 
      Caption         =   "Exit"
      Height          =   375
      Left            =   2040
      TabIndex        =   2
      Top             =   600
      Width           =   855
   End
   Begin VB.CommandButton Find_Prime 
      Caption         =   "Prime number"
      Height          =   375
      Left            =   480
      TabIndex        =   1
      Top             =   600
      Width           =   1215
   End
   Begin VB.Label Label1 
      Caption         =   "Prime numbers between 1 to 100"
      Height          =   255
      Left            =   480
      TabIndex        =   0
      Top             =   120
      Width           =   2415
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Exit_Button_Click()
End
End Sub

Private Sub Find_Prime_Click()
Dim i, j As Integer
Dim prime As Integer
For i = 1 To 100
j = 2
prime = 1
While (j < i)
If i Mod j = 0 Then
prime = 0
End If
j = j + 1
Wend
If prime = 1 Then
Print i
End If
Next i
End Sub

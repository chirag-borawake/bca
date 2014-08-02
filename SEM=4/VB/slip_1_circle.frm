VERSION 5.00
Begin VB.Form Form2 
   Caption         =   "Form2"
   ClientHeight    =   3120
   ClientLeft      =   225
   ClientTop       =   855
   ClientWidth     =   3990
   LinkTopic       =   "Form2"
   ScaleHeight     =   3120
   ScaleWidth      =   3990
   StartUpPosition =   3  'Windows Default
   Begin VB.Shape Shape1 
      Height          =   1815
      Left            =   840
      Shape           =   3  'Circle
      Top             =   720
      Width           =   3135
   End
   Begin VB.Menu mnuDraw 
      Caption         =   "&Draw"
      Begin VB.Menu smnuCircle 
         Caption         =   "Circle"
      End
   End
   Begin VB.Menu mnumodify 
      Caption         =   "&Modify"
      Begin VB.Menu smnuShrink 
         Caption         =   "Shrink"
      End
      Begin VB.Menu smnuExpand 
         Caption         =   "Expand"
      End
      Begin VB.Menu smnuErase 
         Caption         =   "Erase"
      End
   End
   Begin VB.Menu mnuExit 
      Caption         =   "Exit"
   End
End
Attribute VB_Name = "Form2"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Form_Load()
Shape1.Visible = False
End Sub

Private Sub mnuExit_Click()
End
End Sub

Private Sub smnuCircle_Click()
Shape1.Visible = True
Shape1.Height = 1000
Shape1.Width = 1000
End Sub

Private Sub smnuErase_Click()
Shape1.Visible = False
End Sub

Private Sub smnuExpand_Click()
Shape1.Height = 2000
Shape1.Width = 2000
End Sub

Private Sub smnuShrink_Click()
Shape1.Height = 500
Shape1.Width = 500
End Sub

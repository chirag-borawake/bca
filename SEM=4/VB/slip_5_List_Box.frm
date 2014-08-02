VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   3420
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   5310
   LinkTopic       =   "Form1"
   ScaleHeight     =   3420
   ScaleWidth      =   5310
   StartUpPosition =   3  'Windows Default
   Begin VB.CommandButton Exit 
      Caption         =   "Exit"
      Height          =   375
      Left            =   2280
      TabIndex        =   10
      Top             =   2520
      Width           =   975
   End
   Begin VB.CommandButton Remove_Rigth 
      Caption         =   "Remov Item"
      Height          =   435
      Left            =   3720
      TabIndex        =   7
      Top             =   2760
      Width           =   1215
   End
   Begin VB.CommandButton Remove_Left 
      Caption         =   "Remove Item"
      Height          =   435
      Left            =   600
      TabIndex        =   6
      Top             =   2760
      Width           =   1095
   End
   Begin VB.CommandButton Move_Left 
      Caption         =   "<<"
      Height          =   315
      Left            =   2400
      TabIndex        =   5
      Top             =   1440
      Width           =   735
   End
   Begin VB.CommandButton Move_Rigth 
      Caption         =   ">>"
      Height          =   315
      Left            =   2400
      TabIndex        =   4
      Top             =   840
      Width           =   675
   End
   Begin VB.CommandButton Add_Right 
      Caption         =   "Add Item"
      Height          =   435
      Left            =   3720
      TabIndex        =   3
      Top             =   2160
      Width           =   1215
   End
   Begin VB.CommandButton Add_Left 
      Caption         =   "Add Item"
      Height          =   435
      Left            =   600
      TabIndex        =   1
      Top             =   2160
      Width           =   1095
   End
   Begin VB.ListBox RigthList 
      Height          =   1230
      Left            =   3720
      MultiSelect     =   2  'Extended
      TabIndex        =   2
      Top             =   600
      Width           =   1095
   End
   Begin VB.ListBox LeftList 
      Height          =   1230
      Left            =   600
      MultiSelect     =   2  'Extended
      TabIndex        =   0
      Top             =   600
      Width           =   1095
   End
   Begin VB.Label Label2 
      Caption         =   "Second List"
      Height          =   255
      Left            =   3840
      TabIndex        =   9
      Top             =   240
      Width           =   975
   End
   Begin VB.Label Label1 
      Caption         =   "First List"
      Height          =   255
      Left            =   720
      TabIndex        =   8
      Top             =   240
      Width           =   735
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Dim i, j As Integer
Dim item As String
Dim flag As Boolean
Private Sub Add_Left_Click()
item = InputBox("Enter item:")
For i = 0 To LeftList.ListCount - 1
If LeftList.List(i) = item Then
     MsgBox "Item already present in the list."
     Exit Sub
End If
Next
LeftList.AddItem item
End Sub

Private Sub Add_Right_Click()
item = InputBox("Enter item:")
For i = 0 To RigthList.ListCount - 1
 If RigthList.List(i) = item Then
    MsgBox "Item already present in the list."
    Exit Sub
 End If
Next
RigthList.AddItem item
End Sub
Private Sub Move_Rigth_Click()
For i = 0 To LeftList.ListCount - 1
If LeftList.Selected(i) = True Then
    flag = 0
    For j = 0 To RigthList.ListCount - 1
    If RigthList.List(j) = LeftList.List(i) Then
        MsgBox "Item already present in the list."
        flag = 1
        Exit For
    End If
    Next j
    If flag = 0 Then
        RigthList.AddItem LeftList.List(i)
    End If
End If
Next i
End Sub

Private Sub Move_Left_Click()
 For i = 0 To RigthList.ListCount - 1
If RigthList.Selected(i) = True Then
    flag = 0
    For j = 0 To LeftList.ListCount - 1
    If LeftList.List(j) = RigthList.List(i) Then
        MsgBox "Item already present in the list."
        flag = 1
        Exit For
    End If
    Next j
    If flag = 0 Then
        LeftList.AddItem RigthList.List(i)
    End If
End If
Next i
End Sub

Private Sub Remove_Left_Click()
For i = LeftList.ListCount - 1 To 0 Step -1
If LeftList.Selected(i) = True Then
    LeftList.RemoveItem i
End If
Next
End Sub

Private Sub Remove_Rigth_Click()
For i = RigthList.ListCount - 1 To 0 Step -1
If RigthList.Selected(i) = True Then
    RigthList.RemoveItem i
End If
Next
End Sub

Private Sub Exit_Click()
End
End Sub


VERSION 5.00
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   5400
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   8430
   LinkTopic       =   "Form1"
   ScaleHeight     =   5400
   ScaleWidth      =   8430
   StartUpPosition =   3  'Windows Default
   Begin VB.TextBox Text3 
      Height          =   495
      Left            =   3000
      TabIndex        =   11
      Text            =   " "
      Top             =   2640
      Width           =   1215
   End
   Begin VB.ComboBox Combo1 
      Height          =   315
      Left            =   3000
      TabIndex        =   10
      Text            =   " "
      Top             =   2040
      Width           =   1215
   End
   Begin VB.TextBox Text2 
      Height          =   495
      Left            =   3000
      TabIndex        =   9
      Text            =   " "
      Top             =   1320
      Width           =   1215
   End
   Begin VB.TextBox Text1 
      Height          =   495
      Left            =   3000
      TabIndex        =   8
      Text            =   " "
      Top             =   600
      Width           =   1215
   End
   Begin VB.CommandButton Command4 
      Caption         =   " Reservation Details"
      Height          =   495
      Left            =   5040
      TabIndex        =   3
      Top             =   3720
      Width           =   1215
   End
   Begin VB.CommandButton Command3 
      Caption         =   "cancel"
      Height          =   495
      Left            =   3600
      TabIndex        =   2
      Top             =   3840
      Width           =   1215
   End
   Begin VB.CommandButton Command2 
      Caption         =   "Add"
      Height          =   495
      Left            =   2040
      TabIndex        =   1
      Top             =   3840
      Width           =   1215
   End
   Begin VB.CommandButton Command1 
      Caption         =   "Reserve"
      Height          =   495
      Left            =   360
      TabIndex        =   0
      Top             =   3840
      Width           =   1215
   End
   Begin VB.Label Label4 
      Caption         =   "Total amount"
      Height          =   255
      Left            =   1080
      TabIndex        =   7
      Top             =   2880
      Width           =   1215
   End
   Begin VB.Label Label3 
      Caption         =   "Catagory"
      Height          =   255
      Left            =   1080
      TabIndex        =   6
      Top             =   2160
      Width           =   1215
   End
   Begin VB.Label Label2 
      Caption         =   "Move name"
      Height          =   255
      Left            =   1080
      TabIndex        =   5
      Top             =   720
      Width           =   1215
   End
   Begin VB.Label Label1 
      Caption         =   "No of  tickets"
      Height          =   255
      Left            =   1080
      TabIndex        =   4
      Top             =   1440
      Width           =   1455
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Command1_Click()
Data1.Recordset.AddNew
End Sub

Private Sub Command2_Click()
Data1.Recordset.Update
End Sub

Private Sub Command3_Click()
Data1.Recordset.Delete
Data1.Recordset.MoveNext
If Data1.Recordset.EOF Then
Data1.Recordset.MoveLast
End If
End Sub

Private Sub Command4_Click()
Form2.Show
End Sub

Private Sub Form_Activate()
Dim tot1, cnt1, tot2, cnt2, tot3, cnt3 As Integer
Do While Not Data1.Recordset.EOF
If Data1.Recordset.Fields(2) = "Balcony" Then
tot1 = tot1 + Data1.Recordset.Fields(3)
cnt1 = cnt1 + Data1.Recordset.Fields(0)
ElseIf Data1.Recordset.Fields(2) = "Upper" Then
tot2 = tot2 + Data1.Recordset.Fields(3)
cnt2 = cnt2 + Data1.Recordset.Fields(0)
ElseIf Data1.Recordset.Fields(2) = "Lower" Then
tot3 = tot3 + Data1.Recordset.Fields(3)
cnt3 = cnt3 + Data1.Recordset.Fields(0)
End If
Data1.Recordset.MoveNext
Loop
Print "Balcony" + "Total Tickets=" & cnt1 & " Total amt = " & tot1
Print "Upper" + "Total Tickets=" & cnt2 & " Total amt = " & tot2
Print "Lower" + "Total Tickets=" & cnt3 & " Total amt = " & tot3
End Sub




// MFCApplication1Dlg.h: 헤더 파일
//

#pragma once

#define		X_COUNT			19
#define		Y_COUNT			19
#define		G_CX			30			// GRID X
#define		G_CX_H			G_CX/2		// GRID X/2

// CMFCApplication1Dlg 대화 상자
class CMFCApplication1Dlg : public CDialogEx
{
// 생성입니다.
public:
	CMFCApplication1Dlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION1_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	CPen m_grid_pen;
	char m_step = 0;				// 0 - 흑 / 1 - 백
	char m_dol[Y_COUNT][X_COUNT];	// 0 - 돌 없음 / 1 - 흑 / 2 - 백
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

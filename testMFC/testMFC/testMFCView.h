
// testMFCView.h : interface de la classe CtestMFCView
//

#pragma once


class CtestMFCView : public CView
{
protected: // création à partir de la sérialisation uniquement
	CtestMFCView();
	DECLARE_DYNCREATE(CtestMFCView)

// Attributs
public:
	CtestMFCDoc* GetDocument() const;

// Opérations
public:

// Substitutions
public:
	virtual void OnDraw(CDC* pDC);  // substitué pour dessiner cette vue
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implémentation
public:
	virtual ~CtestMFCView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Fonctions générées de la table des messages
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // version debug dans testMFCView.cpp
inline CtestMFCDoc* CtestMFCView::GetDocument() const
   { return reinterpret_cast<CtestMFCDoc*>(m_pDocument); }
#endif


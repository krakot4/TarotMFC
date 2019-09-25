
// testMFCView.cpp : impl�mentation de la classe CtestMFCView
//

#include "stdafx.h"
// SHARED_HANDLERS peuvent �tre d�finis dans les gestionnaires d'aper�u, de miniature
// et de recherche d'impl�mentation de projet ATL et permettent la partage de code de document avec ce projet.
#ifndef SHARED_HANDLERS
#include "testMFC.h"
#endif

#include "testMFCDoc.h"
#include "testMFCView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CtestMFCView

IMPLEMENT_DYNCREATE(CtestMFCView, CView)

BEGIN_MESSAGE_MAP(CtestMFCView, CView)
	// Commandes d'impression standard
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CtestMFCView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// construction ou destruction�de CtestMFCView

CtestMFCView::CtestMFCView()
{
	// TODO: ajoutez ici du code de construction

}

CtestMFCView::~CtestMFCView()
{
}

BOOL CtestMFCView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: changez ici la classe ou les styles Window en modifiant
	//  CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// dessin de CtestMFCView

void CtestMFCView::OnDraw(CDC* /*pDC*/)
{
	CtestMFCDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ajoutez ici le code de dessin pour les donn�es natives
}


// impression de CtestMFCView


void CtestMFCView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CtestMFCView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// pr�paration par d�faut
	return DoPreparePrinting(pInfo);
}

void CtestMFCView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ajoutez une initialisation suppl�mentaire avant l'impression
}

void CtestMFCView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ajoutez un nettoyage apr�s l'impression
}

void CtestMFCView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CtestMFCView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// diagnostics pour CtestMFCView

#ifdef _DEBUG
void CtestMFCView::AssertValid() const
{
	CView::AssertValid();
}

void CtestMFCView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CtestMFCDoc* CtestMFCView::GetDocument() const // la version non Debug est inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CtestMFCDoc)));
	return (CtestMFCDoc*)m_pDocument;
}
#endif //_DEBUG


// gestionnaires de messages pour CtestMFCView

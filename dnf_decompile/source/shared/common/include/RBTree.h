#ifndef NSL_RBTREE_H_
#define NSL_RBTREE_H_

#include "ObjectPoolByBoostPool.h"

namespace nsl {

namespace changes_meaning {

enum ENUM_RBCOLOR
{
    RB_RED = 0,
    RB_BLACK = 1
};

template <class TKey, class TData, int N>
struct RBNode
{
    RBNode<TKey, TData, N>* mParent;
    RBNode<TKey, TData, N>* mLeftChild;
    RBNode<TKey, TData, N>* mRightChild;
    changes_meaning::ENUM_RBCOLOR mColor;
    TKey mKey;
    TData mData;

    static void SetColorBlack(RBNode* pNode)
    {
        pNode->mColor = changes_meaning::RB_BLACK;
    }
    static void SetColorRed(RBNode* pNode)
    {
        pNode->mColor = changes_meaning::RB_RED;
    }
    static RBNode* getSibling(RBNode* pNode)
    {
        if (pNode->mParent == NULL)
        {
            return NULL;
        }
        if (pNode->mParent->mLeftChild == pNode)
        {
            return pNode->mParent->mRightChild;
        }
        return pNode->mParent->mLeftChild;
    }
};

} // namespace changes_meaning

template <class TKey, class TData, int N>
class RBTree
{
public:
    typedef changes_meaning::RBNode<TKey, TData, N> RBNodeType;

    template <class TRBNode, class TDataType>
    class RBIterator
    {
    public:
        RBIterator()
        {
            mpRbnode = NULL;
        }
        ~RBIterator()
        {
        }
        RBIterator& operator=(const RBIterator& other)
        {
            mpRbnode = other.mpRbnode;
            return *this;
        }
        void init()
        {
            mpRbnode = NULL;
        }
        RBIterator& operator++()
        {
            if (mpRbnode != NULL)
            {
                if (mpRbnode->mRightChild != NULL)
                {
                    mpRbnode = mpRbnode->mRightChild;
                    while (mpRbnode->mLeftChild != NULL)
                    {
                        mpRbnode = mpRbnode->mLeftChild;
                    }
                }
                else
                {
                    RBNodeType* pParent = mpRbnode->mParent;
                    while (pParent != NULL && mpRbnode == pParent->mRightChild)
                    {
                        mpRbnode = pParent;
                        pParent = pParent->mParent;
                    }
                    mpRbnode = pParent;
                }
            }
            return *this;
        }
        TDataType* GetDataPtr()
        {
            if (mpRbnode == NULL)
            {
                return NULL;
            }
            return &mpRbnode->mData;
        }
        void begin(RBNodeType* pRoot)
        {
            mpRbnode = pRoot;
            if (mpRbnode != NULL)
            {
                while (mpRbnode->mLeftChild != NULL)
                {
                    mpRbnode = mpRbnode->mLeftChild;
                }
            }
        }

    private:
        RBNodeType* mpRbnode;
        int mTraversal;
        int mFlow;
    };

    RBTree(bool bDuplicatePermit = false)
    {
        mDuplicatePermit = bDuplicatePermit;
        mpRBNodePool = NULL;
        mpRoot = NULL;
        mNumOfRBNode = 0;
    }
    RBTree(const RBTree& other)
    {
        mDuplicatePermit = other.mDuplicatePermit;
        mpRBNodePool = NULL;
        mpRoot = NULL;
        mNumOfRBNode = 0;
    }
    ~RBTree()
    {
    }
    RBTree& operator=(const RBTree& other)
    {
        mDuplicatePermit = other.mDuplicatePermit;
        return *this;
    }

    bool Insert(const TKey& rKey, const TData& rNewData)
    {
        RBNodeType* pNode = findNode(rKey);
        if (pNode != NULL && !mDuplicatePermit)
        {
            return false;
        }
        RBNodeType* pNewNode = new RBNodeType();
        pNewNode->mKey = rKey;
        pNewNode->mData = rNewData;
        pNewNode->mColor = changes_meaning::RB_RED;
        pNewNode->mLeftChild = NULL;
        pNewNode->mRightChild = NULL;
        pNewNode->mParent = NULL;
        mNumOfRBNode = mNumOfRBNode + 1;

        RBNodeType* y = NULL;
        RBNodeType* x = mpRoot;
        while (x != NULL)
        {
            y = x;
            if (pNewNode->mKey < x->mKey)
            {
                x = x->mLeftChild;
            }
            else
            {
                x = x->mRightChild;
            }
        }
        pNewNode->mParent = y;
        if (y == NULL)
        {
            mpRoot = pNewNode;
        }
        else if (pNewNode->mKey < y->mKey)
        {
            y->mLeftChild = pNewNode;
        }
        else
        {
            y->mRightChild = pNewNode;
        }

        while (pNewNode != mpRoot && pNewNode->mParent->mColor == changes_meaning::RB_RED)
        {
            if (pNewNode->mParent == pNewNode->mParent->mParent->mLeftChild)
            {
                RBNodeType* u = pNewNode->mParent->mParent->mRightChild;
                if (u != NULL && u->mColor == changes_meaning::RB_RED)
                {
                    pNewNode->mParent->mColor = changes_meaning::RB_BLACK;
                    u->mColor = changes_meaning::RB_BLACK;
                    pNewNode->mParent->mParent->mColor = changes_meaning::RB_RED;
                    pNewNode = pNewNode->mParent->mParent;
                }
                else
                {
                    if (pNewNode == pNewNode->mParent->mRightChild)
                    {
                        pNewNode = pNewNode->mParent;
                        rotateLeft(pNewNode);
                    }
                    pNewNode->mParent->mColor = changes_meaning::RB_BLACK;
                    pNewNode->mParent->mParent->mColor = changes_meaning::RB_RED;
                    rotateRight(pNewNode->mParent->mParent);
                }
            }
            else
            {
                RBNodeType* u = pNewNode->mParent->mParent->mLeftChild;
                if (u != NULL && u->mColor == changes_meaning::RB_RED)
                {
                    pNewNode->mParent->mColor = changes_meaning::RB_BLACK;
                    u->mColor = changes_meaning::RB_BLACK;
                    pNewNode->mParent->mParent->mColor = changes_meaning::RB_RED;
                    pNewNode = pNewNode->mParent->mParent;
                }
                else
                {
                    if (pNewNode == pNewNode->mParent->mLeftChild)
                    {
                        pNewNode = pNewNode->mParent;
                        rotateRight(pNewNode);
                    }
                    pNewNode->mParent->mColor = changes_meaning::RB_BLACK;
                    pNewNode->mParent->mParent->mColor = changes_meaning::RB_RED;
                    rotateLeft(pNewNode->mParent->mParent);
                }
            }
        }
        mpRoot->mColor = changes_meaning::RB_BLACK;
        return true;
    }

    bool Remove(const TKey& rKey)
    {
        RBNodeType* target = findNode(rKey);
        if (target == NULL)
        {
            return false;
        }
        RBNodeType* child = NULL;
        if (target->mLeftChild != NULL && target->mRightChild != NULL)
        {
            RBNodeType* next = target->mLeftChild;
            RBNodeType* rightmost = NULL;
            while (next != NULL)
            {
                rightmost = next;
                next = next->mRightChild;
            }
            target->mKey = rightmost->mKey;
            target->mData = rightmost->mData;
            target = rightmost;
        }
        child = (target->mRightChild == NULL) ? target->mLeftChild : target->mRightChild;
        if (target->mParent == NULL)
        {
            mpRoot = child;
        }
        else if (target->mParent->mLeftChild == target)
        {
            target->mParent->mLeftChild = child;
        }
        else
        {
            target->mParent->mRightChild = child;
        }
        if (child != NULL)
        {
            child->mParent = target->mParent;
        }
        if (target->mColor == changes_meaning::RB_BLACK)
        {
            deleteFixup(child, target->mParent);
        }
        delete target;
        mNumOfRBNode = mNumOfRBNode - 1;
        if (mpRoot != NULL)
        {
            mpRoot->mColor = changes_meaning::RB_BLACK;
        }
        return true;
    }

    RBNodeType* Find(const TKey& rKey)
    {
        return findNode(rKey);
    }

    void Clear()
    {
        mpRoot = NULL;
        mNumOfRBNode = 0;
    }

    unsigned int Size()
    {
        return mNumOfRBNode;
    }

    RBIterator<RBNodeType, TData> InorderBegin()
    {
        RBIterator<RBNodeType, TData> iter;
        iter.begin(mpRoot);
        return iter;
    }

    bool Empty()
    {
        return mpRoot == NULL;
    }

    void rotateLeft(RBNodeType* pNode)
    {
        RBNodeType* y = pNode->mRightChild;
        pNode->mRightChild = y->mLeftChild;
        if (y->mLeftChild != NULL)
        {
            y->mLeftChild->mParent = pNode;
        }
        y->mParent = pNode->mParent;
        if (pNode->mParent == NULL)
        {
            mpRoot = y;
        }
        else if (pNode == pNode->mParent->mLeftChild)
        {
            pNode->mParent->mLeftChild = y;
        }
        else
        {
            pNode->mParent->mRightChild = y;
        }
        y->mLeftChild = pNode;
        pNode->mParent = y;
    }

    void rotateRight(RBNodeType* pNode)
    {
        RBNodeType* y = pNode->mLeftChild;
        pNode->mLeftChild = y->mRightChild;
        if (y->mRightChild != NULL)
        {
            y->mRightChild->mParent = pNode;
        }
        y->mParent = pNode->mParent;
        if (pNode->mParent == NULL)
        {
            mpRoot = y;
        }
        else if (pNode == pNode->mParent->mRightChild)
        {
            pNode->mParent->mRightChild = y;
        }
        else
        {
            pNode->mParent->mLeftChild = y;
        }
        y->mRightChild = pNode;
        pNode->mParent = y;
    }

    RBNodeType* findNode(const TKey& rKey)
    {
        RBNodeType* pNode = mpRoot;
        while (pNode != NULL)
        {
            if (rKey < pNode->mKey)
            {
                pNode = pNode->mLeftChild;
            }
            else if (pNode->mKey < rKey)
            {
                pNode = pNode->mRightChild;
            }
            else
            {
                return pNode;
            }
        }
        return NULL;
    }

    void deleteFixup(RBNodeType* x, RBNodeType* pParent)
    {
        while (x != mpRoot && (x == NULL || x->mColor == changes_meaning::RB_BLACK))
        {
            if (x == pParent->mLeftChild)
            {
                RBNodeType* w = pParent->mRightChild;
                if (w != NULL && w->mColor == changes_meaning::RB_RED)
                {
                    w->mColor = changes_meaning::RB_BLACK;
                    pParent->mColor = changes_meaning::RB_RED;
                    rotateLeft(pParent);
                    w = pParent->mRightChild;
                }
                if ((w == NULL || w->mLeftChild == NULL || w->mLeftChild->mColor == changes_meaning::RB_BLACK) &&
                    (w == NULL || w->mRightChild == NULL || w->mRightChild->mColor == changes_meaning::RB_BLACK))
                {
                    if (w != NULL)
                    {
                        w->mColor = changes_meaning::RB_RED;
                    }
                    x = pParent;
                    pParent = pParent->mParent;
                }
                else
                {
                    if (w != NULL && (w->mRightChild == NULL || w->mRightChild->mColor == changes_meaning::RB_BLACK))
                    {
                        if (w->mLeftChild != NULL)
                        {
                            w->mLeftChild->mColor = changes_meaning::RB_BLACK;
                        }
                        w->mColor = changes_meaning::RB_RED;
                        rotateRight(w);
                        w = pParent->mRightChild;
                    }
                    if (w != NULL)
                    {
                        w->mColor = pParent->mColor;
                        if (w->mRightChild != NULL)
                        {
                            w->mRightChild->mColor = changes_meaning::RB_BLACK;
                        }
                    }
                    pParent->mColor = changes_meaning::RB_BLACK;
                    rotateLeft(pParent);
                    x = mpRoot;
                }
            }
            else
            {
                RBNodeType* w = pParent->mLeftChild;
                if (w != NULL && w->mColor == changes_meaning::RB_RED)
                {
                    w->mColor = changes_meaning::RB_BLACK;
                    pParent->mColor = changes_meaning::RB_RED;
                    rotateRight(pParent);
                    w = pParent->mLeftChild;
                }
                if ((w == NULL || w->mLeftChild == NULL || w->mLeftChild->mColor == changes_meaning::RB_BLACK) &&
                    (w == NULL || w->mRightChild == NULL || w->mRightChild->mColor == changes_meaning::RB_BLACK))
                {
                    if (w != NULL)
                    {
                        w->mColor = changes_meaning::RB_RED;
                    }
                    x = pParent;
                    pParent = pParent->mParent;
                }
                else
                {
                    if (w != NULL && (w->mLeftChild == NULL || w->mLeftChild->mColor == changes_meaning::RB_BLACK))
                    {
                        if (w->mRightChild != NULL)
                        {
                            w->mRightChild->mColor = changes_meaning::RB_BLACK;
                        }
                        w->mColor = changes_meaning::RB_RED;
                        rotateLeft(w);
                        w = pParent->mLeftChild;
                    }
                    if (w != NULL)
                    {
                        w->mColor = pParent->mColor;
                        if (w->mLeftChild != NULL)
                        {
                            w->mLeftChild->mColor = changes_meaning::RB_BLACK;
                        }
                    }
                    pParent->mColor = changes_meaning::RB_BLACK;
                    rotateRight(pParent);
                    x = mpRoot;
                }
            }
        }
        if (x != NULL)
        {
            x->mColor = changes_meaning::RB_BLACK;
        }
    }

private:
    bool mDuplicatePermit;
    void* mpRBNodePool;
    RBNodeType* mpRoot;
    unsigned int mNumOfRBNode;
};

} // namespace nsl

#endif // NSL_RBTREE_H_

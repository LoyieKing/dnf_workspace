# GetItemPrice

`_ZN13private_store13CPrivateStore12GetItemPriceEPK5CItemRNS_16PrivateStoreItemEiRiRjS7_`

`private_store::CPrivateStore::GetItemPrice(CItem const*, private_store::PrivateStoreItem&, int, int&, unsigned int&, unsigned int&)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c7d04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c7d04  _ZN13private_store13CPrivateStore12GetItemPriceEPK5CItemRNS_16PrivateStoreItemEiRiRjS7_
#           private_store::CPrivateStore::GetItemPrice(CItem const*, private_store::PrivateStoreItem&, int, int&, unsigned int&, unsigned int&)
# range [0x085c7d04, 0x085c7e6c]
085c7d04 +0x000:  push   %ebp
085c7d05 +0x001:  mov    %esp,%ebp
085c7d07 +0x003:  sub    $0x18,%esp
085c7d0a +0x006:  mov    0x10(%ebp),%eax
085c7d0d +0x009:  mov    0x40(%eax),%edx
085c7d10 +0x00c:  mov    0x18(%ebp),%eax
085c7d13 +0x00f:  mov    %edx,(%eax)
085c7d15 +0x011:  mov    0x1c(%ebp),%eax
085c7d18 +0x014:  movl   $0x0,(%eax)
085c7d1e +0x01a:  mov    0x20(%ebp),%eax
085c7d21 +0x01d:  movl   $0x0,(%eax)
085c7d27 +0x023:  mov    0xc(%ebp),%eax
085c7d2a +0x026:  mov    %eax,(%esp)
085c7d2d +0x029:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
085c7d32 +0x02e:  test   %al,%al
085c7d34 +0x030:  je     085c7def <+0xeb>
085c7d3a +0x036:  cmpl   $0x0,0x14(%ebp)
085c7d3e +0x03a:  jg     085c7d60 <+0x5c>
085c7d40 +0x03c:  mov    0x8(%ebp),%eax
085c7d43 +0x03f:  add    $0x14,%eax
085c7d46 +0x042:  movl   $0x1,0x4(%esp)
085c7d4e +0x04a:  mov    %eax,(%esp)
085c7d51 +0x04d:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c7d56 +0x052:  mov    $0x0,%eax
085c7d5b +0x057:  jmp    085c7e6b <+0x167>
085c7d60 +0x05c:  mov    0x10(%ebp),%eax
085c7d63 +0x05f:  mov    0x7(%eax),%eax
085c7d66 +0x062:  cmp    0x14(%ebp),%eax
085c7d69 +0x065:  jge    085c7d8b <+0x87>
085c7d6b +0x067:  mov    0x8(%ebp),%eax
085c7d6e +0x06a:  add    $0x14,%eax
085c7d71 +0x06d:  movl   $0x11,0x4(%esp)
085c7d79 +0x075:  mov    %eax,(%esp)
085c7d7c +0x078:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c7d81 +0x07d:  mov    $0x0,%eax
085c7d86 +0x082:  jmp    085c7e6b <+0x167>
085c7d8b +0x087:  mov    0x18(%ebp),%eax
085c7d8e +0x08a:  mov    (%eax),%eax
085c7d90 +0x08c:  mov    0x18(%ebp),%edx
085c7d93 +0x08f:  mov    %edx,0x8(%esp)
085c7d97 +0x093:  mov    0x14(%ebp),%edx
085c7d9a +0x096:  mov    %edx,0x4(%esp)
085c7d9e +0x09a:  mov    %eax,(%esp)
085c7da1 +0x09d:  call   085cd22a <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1f40>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1f40
085c7da6 +0x0a2:  xor    $0x1,%eax
085c7da9 +0x0a5:  test   %al,%al
085c7dab +0x0a7:  je     085c7dcd <+0xc9>
085c7dad +0x0a9:  mov    0x8(%ebp),%eax
085c7db0 +0x0ac:  add    $0x14,%eax
085c7db3 +0x0af:  movl   $0x1,0x4(%esp)
085c7dbb +0x0b7:  mov    %eax,(%esp)
085c7dbe +0x0ba:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c7dc3 +0x0bf:  mov    $0x0,%eax
085c7dc8 +0x0c4:  jmp    085c7e6b <+0x167>
085c7dcd +0x0c9:  mov    0x1c(%ebp),%eax
085c7dd0 +0x0cc:  mov    (%eax),%edx
085c7dd2 +0x0ce:  mov    0x14(%ebp),%eax
085c7dd5 +0x0d1:  imul   %eax,%edx
085c7dd8 +0x0d4:  mov    0x1c(%ebp),%eax
085c7ddb +0x0d7:  mov    %edx,(%eax)
085c7ddd +0x0d9:  mov    0x20(%ebp),%eax
085c7de0 +0x0dc:  mov    (%eax),%edx
085c7de2 +0x0de:  mov    0x14(%ebp),%eax
085c7de5 +0x0e1:  imul   %eax,%edx
085c7de8 +0x0e4:  mov    0x20(%ebp),%eax
085c7deb +0x0e7:  mov    %edx,(%eax)
085c7ded +0x0e9:  jmp    085c7e40 <+0x13c>
085c7def +0x0eb:  mov    0xc(%ebp),%eax
085c7df2 +0x0ee:  mov    (%eax),%eax
085c7df4 +0x0f0:  add    $0x10,%eax
085c7df7 +0x0f3:  mov    (%eax),%edx
085c7df9 +0x0f5:  mov    0xc(%ebp),%eax
085c7dfc +0x0f8:  mov    %eax,(%esp)
085c7dff +0x0fb:  call   *%edx
085c7e01 +0x0fd:  xor    $0x1,%eax
085c7e04 +0x100:  test   %al,%al
085c7e06 +0x102:  je     085c7e1a <+0x116>
085c7e08 +0x104:  mov    0x10(%ebp),%eax
085c7e0b +0x107:  mov    0x7(%eax),%eax
085c7e0e +0x10a:  cmp    0x14(%ebp),%eax
085c7e11 +0x10d:  je     085c7e1a <+0x116>
085c7e13 +0x10f:  mov    $0x1,%eax
085c7e18 +0x114:  jmp    085c7e1f <+0x11b>
085c7e1a +0x116:  mov    $0x0,%eax
085c7e1f +0x11b:  test   %al,%al
085c7e21 +0x11d:  je     085c7e40 <+0x13c>
085c7e23 +0x11f:  mov    0x8(%ebp),%eax
085c7e26 +0x122:  add    $0x14,%eax
085c7e29 +0x125:  movl   $0x1,0x4(%esp)
085c7e31 +0x12d:  mov    %eax,(%esp)
085c7e34 +0x130:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c7e39 +0x135:  mov    $0x0,%eax
085c7e3e +0x13a:  jmp    085c7e6b <+0x167>
085c7e40 +0x13c:  mov    0x18(%ebp),%eax
085c7e43 +0x13f:  mov    (%eax),%eax
085c7e45 +0x141:  test   %eax,%eax
085c7e47 +0x143:  jg     085c7e66 <+0x162>
085c7e49 +0x145:  mov    0x8(%ebp),%eax
085c7e4c +0x148:  add    $0x14,%eax
085c7e4f +0x14b:  movl   $0x1,0x4(%esp)
085c7e57 +0x153:  mov    %eax,(%esp)
085c7e5a +0x156:  call   085c4c7c <_ZN13private_store13CErrorHandler2DoEi>  ; private_store::CErrorHandler::Do(int)
085c7e5f +0x15b:  mov    $0x0,%eax
085c7e64 +0x160:  jmp    085c7e6b <+0x167>
085c7e66 +0x162:  mov    $0x1,%eax
085c7e6b +0x167:  leave
085c7e6c +0x168:  ret
```

## 反编译 C

```c
// private_store::CPrivateStore::GetItemPrice @ 0x85c7d04

/* private_store::CPrivateStore::GetItemPrice(CItem const*, private_store::PrivateStoreItem&, int,
   int&, unsigned int&, unsigned int&) */

bool __thiscall
private_store::CPrivateStore::GetItemPrice
          (CPrivateStore *this,CItem *param_1,PrivateStoreItem *param_2,int param_3,int *param_4,
          uint *param_5,uint *param_6)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  
  *param_4 = *(int *)(param_2 + 0x40);
  *param_5 = 0;
  *param_6 = 0;
  cVar3 = CItem::is_stackable(param_1);
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
    if ((cVar3 == '\x01') || (*(int *)(param_2 + 7) == param_3)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),1);
      return false;
    }
  }
  else {
    if (param_3 < 1) {
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),1);
      return false;
    }
    if (*(int *)(param_2 + 7) < param_3) {
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
      return false;
    }
    cVar3 = COperator<int>::Product(*param_4,param_3,param_4);
    if (cVar3 != '\x01') {
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),1);
      return false;
    }
    *param_5 = *param_5 * param_3;
    *param_6 = *param_6 * param_3;
  }
  iVar1 = *param_4;
  if (0 >= iVar1) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),1);
  }
  return 0 < iVar1;
}
```

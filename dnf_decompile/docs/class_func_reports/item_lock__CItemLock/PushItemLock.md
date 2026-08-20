# PushItemLock

`_ZN9item_lock9CItemLock12PushItemLockEP5CUserhP14stItemLockInfo`

`item_lock::CItemLock::PushItemLock(CUser*, unsigned char, stItemLockInfo*)`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x08542a8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08542a8a  _ZN9item_lock9CItemLock12PushItemLockEP5CUserhP14stItemLockInfo
#           item_lock::CItemLock::PushItemLock(CUser*, unsigned char, stItemLockInfo*)
# range [0x08542a8a, 0x08542b7f]
08542a8a +0x00:  push   %ebp
08542a8b +0x01:  mov    %esp,%ebp
08542a8d +0x03:  push   %ebx
08542a8e +0x04:  sub    $0x44,%esp
08542a91 +0x07:  mov    0x10(%ebp),%eax
08542a94 +0x0a:  mov    %al,-0x2c(%ebp)
08542a97 +0x0d:  mov    0x14(%ebp),%eax
08542a9a +0x10:  movzbl 0x4(%eax),%eax
08542a9e +0x14:  test   %al,%al
08542aa0 +0x16:  jne    08542abc <+0x32>
08542aa2 +0x18:  mov    0x8(%ebp),%eax
08542aa5 +0x1b:  lea    0x20(%eax),%edx
08542aa8 +0x1e:  lea    -0x2c(%ebp),%eax
08542aab +0x21:  mov    %eax,0x4(%esp)
08542aaf +0x25:  mov    %edx,(%esp)
08542ab2 +0x28:  call   0854350a <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x4ec>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x4ec
08542ab7 +0x2d:  jmp    08542b7a <+0xf0>
08542abc +0x32:  mov    0x14(%ebp),%eax
08542abf +0x35:  movzbl 0x4(%eax),%eax
08542ac3 +0x39:  cmp    $0x2,%al
08542ac5 +0x3b:  jne    08542b2d <+0xa3>
08542ac7 +0x3d:  mov    0x14(%ebp),%eax
08542aca +0x40:  mov    (%eax),%ebx
08542acc +0x42:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08542ad3 +0x49:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08542ad8 +0x4e:  sub    $0x3f480,%eax
08542add +0x53:  cmp    %eax,%ebx
08542adf +0x55:  setle  %al
08542ae2 +0x58:  test   %al,%al
08542ae4 +0x5a:  je     08542b18 <+0x8e>
08542ae6 +0x5c:  mov    0x14(%ebp),%eax
08542ae9 +0x5f:  movb   $0x0,0x4(%eax)
08542aed +0x63:  mov    0x14(%ebp),%eax
08542af0 +0x66:  movl   $0x0,(%eax)
08542af6 +0x6c:  mov    0x8(%ebp),%eax
08542af9 +0x6f:  lea    0x20(%eax),%edx
08542afc +0x72:  lea    -0x2c(%ebp),%eax
08542aff +0x75:  mov    %eax,0x4(%esp)
08542b03 +0x79:  mov    %edx,(%esp)
08542b06 +0x7c:  call   0854350a <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x4ec>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x4ec
08542b0b +0x81:  mov    0x8(%ebp),%eax
08542b0e +0x84:  mov    %eax,(%esp)
08542b11 +0x87:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
08542b16 +0x8c:  jmp    08542b7a <+0xf0>
08542b18 +0x8e:  mov    0x8(%ebp),%eax
08542b1b +0x91:  lea    0x54(%eax),%edx
08542b1e +0x94:  mov    0xc(%ebp),%eax
08542b21 +0x97:  mov    %eax,0x4(%esp)
08542b25 +0x9b:  mov    %edx,(%esp)
08542b28 +0x9e:  call   0854147c <_ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser>  ; item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)
08542b2d +0xa3:  lea    -0x14(%ebp),%eax
08542b30 +0xa6:  mov    0x14(%ebp),%edx
08542b33 +0xa9:  mov    %edx,0x8(%esp)
08542b37 +0xad:  lea    -0x2c(%ebp),%edx
08542b3a +0xb0:  mov    %edx,0x4(%esp)
08542b3e +0xb4:  mov    %eax,(%esp)
08542b41 +0xb7:  call   08543411 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x3f3>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x3f3
08542b46 +0xbc:  sub    $0x4,%esp
08542b49 +0xbf:  lea    -0x14(%ebp),%eax
08542b4c +0xc2:  mov    %eax,0x4(%esp)
08542b50 +0xc6:  lea    -0x20(%ebp),%eax
08542b53 +0xc9:  mov    %eax,(%esp)
08542b56 +0xcc:  call   08543450 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x432>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x432
08542b5b +0xd1:  mov    0x8(%ebp),%eax
08542b5e +0xd4:  lea    0x8(%eax),%ecx
08542b61 +0xd7:  lea    -0x28(%ebp),%eax
08542b64 +0xda:  lea    -0x20(%ebp),%edx
08542b67 +0xdd:  mov    %edx,0x8(%esp)
08542b6b +0xe1:  mov    %ecx,0x4(%esp)
08542b6f +0xe5:  mov    %eax,(%esp)
08542b72 +0xe8:  call   08543488 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x46a>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x46a
08542b77 +0xed:  sub    $0x4,%esp
08542b7a +0xf0:  mov    -0x4(%ebp),%ebx
08542b7d +0xf3:  leave
08542b7e +0xf4:  ret
08542b7f +0xf5:  nop
```

## 反编译 C

```c
// item_lock::CItemLock::PushItemLock @ 0x8542a8a

/* item_lock::CItemLock::PushItemLock(CUser*, unsigned char, stItemLockInfo*) */

void __thiscall
item_lock::CItemLock::PushItemLock
          (CItemLock *this,CUser *param_1,uchar param_2,stItemLockInfo *param_3)

{
  int iVar1;
  int iVar2;
  stItemLockInfo local_30 [4];
  pair local_2c [8];
  pair<unsigned_char_const,stItemLockInfo> local_24 [12];
  uchar local_18 [16];
  
  local_30[0] = (stItemLockInfo)param_2;
  if (param_3[4] == (stItemLockInfo)0x0) {
    std::stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>::push
              ((stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>> *)
               (this + 0x20),(uchar *)local_30);
  }
  else {
    if (param_3[4] == (stItemLockInfo)0x2) {
      iVar1 = *(int *)param_3;
      iVar2 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      if (iVar1 <= iVar2 + -0x3f480) {
        param_3[4] = (stItemLockInfo)0x0;
        *(undefined4 *)param_3 = 0;
        std::stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>::push
                  ((stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>> *)
                   (this + 0x20),(uchar *)local_30);
        charac_expand::CData::alter((CData *)this);
        return;
      }
      CItemLockTimer::IncreaseItemLockTimer((CItemLockTimer *)(this + 0x54),param_1);
    }
    std::make_pair<unsigned_char&,stItemLockInfo&>(local_18,local_30);
    std::pair<unsigned_char_const,stItemLockInfo>::pair<unsigned_char,stItemLockInfo>
              (local_24,local_18);
    std::
    map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
    ::insert(local_2c);
  }
  return;
}
```

# DoItemLock

`_ZN9item_lock9CItemLock10DoItemLockEP5CUserii`

`item_lock::CItemLock::DoItemLock(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `item_lock::CItemLock` | `0x08542192` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08542192  _ZN9item_lock9CItemLock10DoItemLockEP5CUserii
#           item_lock::CItemLock::DoItemLock(CUser*, int, int)
# range [0x08542192, 0x08542319]
08542192 +0x000:  push   %ebp
08542193 +0x001:  mov    %esp,%ebp
08542195 +0x003:  sub    $0x58,%esp
08542198 +0x006:  mov    0x14(%ebp),%eax
0854219b +0x009:  movzwl %ax,%edx
0854219e +0x00c:  mov    0x10(%ebp),%eax
085421a1 +0x00f:  movzwl %ax,%eax
085421a4 +0x012:  mov    %edx,0x8(%esp)
085421a8 +0x016:  mov    %eax,0x4(%esp)
085421ac +0x01a:  mov    0xc(%ebp),%eax
085421af +0x01d:  mov    %eax,(%esp)
085421b2 +0x020:  call   08680f2e <_ZN5CUser24GetCurCharacInventoryRefEtt>  ; CUser::GetCurCharacInventoryRef(unsigned short, unsigned short)
085421b7 +0x025:  mov    %eax,-0xc(%ebp)
085421ba +0x028:  cmpl   $0x0,-0xc(%ebp)
085421be +0x02c:  jne    085421ca <+0x38>
085421c0 +0x02e:  mov    $0x0,%eax
085421c5 +0x033:  jmp    08542317 <+0x185>
085421ca +0x038:  mov    -0xc(%ebp),%eax
085421cd +0x03b:  add    $0x11,%eax
085421d0 +0x03e:  mov    %eax,(%esp)
085421d3 +0x041:  call   0828b5a8 <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x1d>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x1d
085421d8 +0x046:  mov    %al,-0x2d(%ebp)
085421db +0x049:  movzbl -0x2d(%ebp),%eax
085421df +0x04d:  test   %al,%al
085421e1 +0x04f:  je     085421ed <+0x5b>
085421e3 +0x051:  mov    $0x0,%eax
085421e8 +0x056:  jmp    08542317 <+0x185>
085421ed +0x05b:  mov    0x8(%ebp),%eax
085421f0 +0x05e:  add    $0x20,%eax
085421f3 +0x061:  mov    %eax,(%esp)
085421f6 +0x064:  call   085433fe <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x3e0>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x3e0
085421fb +0x069:  movzbl (%eax),%eax
085421fe +0x06c:  mov    %al,-0x2d(%ebp)
08542201 +0x06f:  mov    0x8(%ebp),%eax
08542204 +0x072:  add    $0x20,%eax
08542207 +0x075:  mov    %eax,(%esp)
0854220a +0x078:  call   085433aa <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x38c>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x38c
0854220f +0x07d:  lea    -0x38(%ebp),%eax
08542212 +0x080:  mov    %eax,(%esp)
08542215 +0x083:  call   0844d406 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x1c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x1c
0854221a +0x088:  movb   $0x1,-0x34(%ebp)
0854221e +0x08c:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08542225 +0x093:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0854222a +0x098:  mov    %eax,-0x38(%ebp)
0854222d +0x09b:  lea    -0x18(%ebp),%eax
08542230 +0x09e:  lea    -0x38(%ebp),%edx
08542233 +0x0a1:  mov    %edx,0x8(%esp)
08542237 +0x0a5:  lea    -0x2d(%ebp),%edx
0854223a +0x0a8:  mov    %edx,0x4(%esp)
0854223e +0x0ac:  mov    %eax,(%esp)
08542241 +0x0af:  call   08543411 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x3f3>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x3f3
08542246 +0x0b4:  sub    $0x4,%esp
08542249 +0x0b7:  lea    -0x18(%ebp),%eax
0854224c +0x0ba:  mov    %eax,0x4(%esp)
08542250 +0x0be:  lea    -0x24(%ebp),%eax
08542253 +0x0c1:  mov    %eax,(%esp)
08542256 +0x0c4:  call   08543450 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x432>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x432
0854225b +0x0c9:  mov    0x8(%ebp),%eax
0854225e +0x0cc:  lea    0x8(%eax),%ecx
08542261 +0x0cf:  lea    -0x2c(%ebp),%eax
08542264 +0x0d2:  lea    -0x24(%ebp),%edx
08542267 +0x0d5:  mov    %edx,0x8(%esp)
0854226b +0x0d9:  mov    %ecx,0x4(%esp)
0854226f +0x0dd:  mov    %eax,(%esp)
08542272 +0x0e0:  call   08543488 <_GLOBAL__I__ZN9item_lock14CItemLockTimer21IncreaseItemLockTimerEP5CUser+0x46a>  ; global constructors keyed to item_lock::CItemLockTimer::IncreaseItemLockTimer(CUser*)+0x46a
08542277 +0x0e5:  sub    $0x4,%esp
0854227a +0x0e8:  mov    0x8(%ebp),%eax
0854227d +0x0eb:  mov    %eax,(%esp)
08542280 +0x0ee:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
08542285 +0x0f3:  movzbl -0x2d(%ebp),%eax
08542289 +0x0f7:  movzbl %al,%eax
0854228c +0x0fa:  mov    -0xc(%ebp),%edx
0854228f +0x0fd:  add    $0x11,%edx
08542292 +0x100:  mov    %eax,0x4(%esp)
08542296 +0x104:  mov    %edx,(%esp)
08542299 +0x107:  call   0844d478 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x8e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x8e
0854229e +0x10c:  mov    -0xc(%ebp),%eax
085422a1 +0x10f:  mov    %eax,0x8(%esp)
085422a5 +0x113:  mov    0xc(%ebp),%eax
085422a8 +0x116:  mov    %eax,0x4(%esp)
085422ac +0x11a:  mov    0x8(%ebp),%eax
085422af +0x11d:  mov    %eax,(%esp)
085422b2 +0x120:  call   08541e4e <_ZN9item_lock9CItemLock10UpdateItemEP5CUserP10Inven_Item>  ; item_lock::CItemLock::UpdateItem(CUser*, Inven_Item*)
085422b7 +0x125:  mov    0x14(%ebp),%eax
085422ba +0x128:  mov    %eax,0xc(%esp)
085422be +0x12c:  mov    0x10(%ebp),%eax
085422c1 +0x12f:  mov    %eax,0x8(%esp)
085422c5 +0x133:  mov    0xc(%ebp),%eax
085422c8 +0x136:  mov    %eax,0x4(%esp)
085422cc +0x13a:  mov    0x8(%ebp),%eax
085422cf +0x13d:  mov    %eax,(%esp)
085422d2 +0x140:  call   08541ea0 <_ZN9item_lock9CItemLock19SendRequestItemLockEP5CUserii>  ; item_lock::CItemLock::SendRequestItemLock(CUser*, int, int)
085422d7 +0x145:  mov    -0xc(%ebp),%eax
085422da +0x148:  mov    0x7(%eax),%edx
085422dd +0x14b:  mov    -0xc(%ebp),%eax
085422e0 +0x14e:  mov    0x2(%eax),%eax
085422e3 +0x151:  mov    0xc(%ebp),%ecx
085422e6 +0x154:  add    $0x79700,%ecx
085422ec +0x15a:  mov    %edx,0x14(%esp)
085422f0 +0x15e:  mov    %eax,0x10(%esp)
085422f4 +0x162:  mov    0x14(%ebp),%eax
085422f7 +0x165:  mov    %eax,0xc(%esp)
085422fb +0x169:  mov    0x10(%ebp),%eax
085422fe +0x16c:  mov    %eax,0x8(%esp)
08542302 +0x170:  movl   $0x0,0x4(%esp)
0854230a +0x178:  mov    %ecx,(%esp)
0854230d +0x17b:  call   08689808 <_ZN15cUserHistoryLog16ItemLockUsingLogEhiiii>  ; cUserHistoryLog::ItemLockUsingLog(unsigned char, int, int, int, int)
08542312 +0x180:  mov    $0x1,%eax
08542317 +0x185:  leave
08542318 +0x186:  ret
08542319 +0x187:  nop
```

## 反编译 C

```c
// item_lock::CItemLock::DoItemLock @ 0x8542192

/* item_lock::CItemLock::DoItemLock(CUser*, int, int) */

undefined4 __thiscall
item_lock::CItemLock::DoItemLock(CItemLock *this,CUser *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  stItemLockInfo *psVar2;
  undefined4 local_3c;
  undefined1 local_38;
  stItemLockInfo local_31;
  pair local_30 [8];
  pair<unsigned_char_const,stItemLockInfo> local_28 [12];
  uchar local_1c [12];
  Inven_Item *local_10;
  
  local_10 = (Inven_Item *)CUser::GetCurCharacInventoryRef(param_1,(ushort)param_2,(ushort)param_3);
  if (local_10 == (Inven_Item *)0x0) {
    uVar1 = 0;
  }
  else {
    local_31 = (stItemLockInfo)stAmplifyOption_t::GetLock((stAmplifyOption_t *)(local_10 + 0x11));
    if (local_31 == (stItemLockInfo)0x0) {
      psVar2 = (stItemLockInfo *)
               std::stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>::
               top();
      local_31 = *psVar2;
      std::stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>>::pop
                ((stack<unsigned_char,std::deque<unsigned_char,std::allocator<unsigned_char>>> *)
                 (this + 0x20));
      stItemLockInfo::stItemLockInfo((stItemLockInfo *)&local_3c);
      local_38 = 1;
      local_3c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      std::make_pair<unsigned_char&,stItemLockInfo&>(local_1c,&local_31);
      std::pair<unsigned_char_const,stItemLockInfo>::pair<unsigned_char,stItemLockInfo>
                (local_28,local_1c);
      std::
      map<unsigned_char,stItemLockInfo,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,stItemLockInfo>>>
      ::insert(local_30);
      charac_expand::CData::alter((CData *)this);
      stAmplifyOption_t::SetLock((stAmplifyOption_t *)(local_10 + 0x11),(uchar)local_31);
      UpdateItem(this,param_1,local_10);
      SendRequestItemLock(this,param_1,param_2,param_3);
      cUserHistoryLog::ItemLockUsingLog
                ((cUserHistoryLog *)(param_1 + 0x79700),'\0',param_2,param_3,*(int *)(local_10 + 2),
                 *(int *)(local_10 + 7));
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
```

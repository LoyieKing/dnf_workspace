# _processSpeicalContinuousTimeItem

`_ZN5CUser33_processSpeicalContinuousTimeItemEj`

`CUser::_processSpeicalContinuousTimeItem(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08659b60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08659b60  _ZN5CUser33_processSpeicalContinuousTimeItemEj
#           CUser::_processSpeicalContinuousTimeItem(unsigned int)
# range [0x08659b60, 0x08659beb]
08659b60 +0x00:  push   %ebp
08659b61 +0x01:  mov    %esp,%ebp
08659b63 +0x03:  push   %ebx
08659b64 +0x04:  sub    $0x24,%esp
08659b67 +0x07:  mov    0xc(%ebp),%ebx
08659b6a +0x0a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08659b6f +0x0f:  mov    %ebx,0x4(%esp)
08659b73 +0x13:  mov    %eax,(%esp)
08659b76 +0x16:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08659b7b +0x1b:  mov    %eax,-0x14(%ebp)
08659b7e +0x1e:  cmpl   $0x0,-0x14(%ebp)
08659b82 +0x22:  je     08659be5 <+0x85>
08659b84 +0x24:  mov    -0x14(%ebp),%eax
08659b87 +0x27:  mov    %eax,(%esp)
08659b8a +0x2a:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08659b8f +0x2f:  test   %al,%al
08659b91 +0x31:  je     08659be6 <+0x86>
08659b93 +0x33:  mov    -0x14(%ebp),%eax
08659b96 +0x36:  mov    %eax,-0x10(%ebp)
08659b99 +0x39:  mov    -0x10(%ebp),%eax
08659b9c +0x3c:  mov    %eax,(%esp)
08659b9f +0x3f:  call   08694736 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xf8b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xf8b
08659ba4 +0x44:  test   %al,%al
08659ba6 +0x46:  je     08659be6 <+0x86>
08659ba8 +0x48:  mov    -0x10(%ebp),%eax
08659bab +0x4b:  mov    %eax,(%esp)
08659bae +0x4e:  call   08694746 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0xf9b>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0xf9b
08659bb3 +0x53:  fstps  -0xc(%ebp)
08659bb6 +0x56:  flds   -0xc(%ebp)
08659bb9 +0x59:  fldz
08659bbb +0x5b:  fxch   %st(1)
08659bbd +0x5d:  fucompp
08659bbf +0x5f:  fnstsw %ax
08659bc1 +0x61:  sahf
08659bc2 +0x62:  seta   %al
08659bc5 +0x65:  test   %al,%al
08659bc7 +0x67:  je     08659be6 <+0x86>
08659bc9 +0x69:  mov    0x8(%ebp),%eax
08659bcc +0x6c:  mov    -0xc(%ebp),%edx
08659bcf +0x6f:  mov    %edx,0x8(%esp)
08659bd3 +0x73:  movl   $0x1,0x4(%esp)
08659bdb +0x7b:  mov    %eax,(%esp)
08659bde +0x7e:  call   0863be1c <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x32d>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x32d
08659be3 +0x83:  jmp    08659be6 <+0x86>
08659be5 +0x85:  nop
08659be6 +0x86:  add    $0x24,%esp
08659be9 +0x89:  pop    %ebx
08659bea +0x8a:  pop    %ebp
08659beb +0x8b:  ret
```

## 反编译 C

```c
// CUser::_processSpeicalContinuousTimeItem @ 0x8659b60

/* CUser::_processSpeicalContinuousTimeItem(unsigned int) */

void __thiscall CUser::_processSpeicalContinuousTimeItem(CUser *this,uint param_1)

{
  char cVar1;
  CDataManager *this_00;
  CItem *this_01;
  longdouble lVar2;
  
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,param_1);
  if (this_01 != (CItem *)0x0) {
    cVar1 = CItem::is_stackable(this_01);
    if (cVar1 != '\0') {
      cVar1 = CStackableItem::IsExpAffect((CStackableItem *)this_01);
      if (cVar1 != '\0') {
        lVar2 = (longdouble)CStackableItem::GetExpAffectRatio((CStackableItem *)this_01);
        if (0.0 < (float)lVar2) {
          CUserCharacInfo::SetExpAffectItemEffect((CUserCharacInfo *)this,true,(float)lVar2);
        }
      }
    }
  }
  return;
}
```

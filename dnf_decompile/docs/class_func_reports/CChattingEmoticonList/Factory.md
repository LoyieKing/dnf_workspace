# Factory

`_ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE`

`CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)`

| 类 | 地址 |
|---|---|
| `CChattingEmoticonList` | `0x080e53a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e53a8  _ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE
#           CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)
# range [0x080e53a8, 0x080e54d1]
080e53a8 +0x000:  push   %ebp
080e53a9 +0x001:  mov    %esp,%ebp
080e53ab +0x003:  push   %edi
080e53ac +0x004:  push   %esi
080e53ad +0x005:  push   %ebx
080e53ae +0x006:  sub    $0x2c,%esp
080e53b1 +0x009:  movl   $0x0,-0x1c(%ebp)
080e53b8 +0x010:  mov    0xc(%ebp),%eax
080e53bb +0x013:  mov    0x4(%eax),%eax
080e53be +0x016:  cmp    $0x2,%eax
080e53c1 +0x019:  je     080e5425 <+0x7d>
080e53c3 +0x01b:  cmp    $0x4,%eax
080e53c6 +0x01e:  je     080e5472 <+0xca>
080e53cc +0x024:  cmp    $0x1,%eax
080e53cf +0x027:  jne    080e54c7 <+0x11f>
080e53d5 +0x02d:  movl   $0x20,(%esp)
080e53dc +0x034:  call   08724450 <_Znwj>  ; operator new(unsigned int)
080e53e1 +0x039:  mov    %eax,%ebx
080e53e3 +0x03b:  mov    %ebx,%eax
080e53e5 +0x03d:  mov    %eax,(%esp)
080e53e8 +0x040:  call   080e5f82 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0xb8>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0xb8
080e53ed +0x045:  jmp    080e5407 <+0x5f>
080e53ef +0x047:  mov    %edx,%esi
080e53f1 +0x049:  mov    %eax,%edi
080e53f3 +0x04b:  mov    %ebx,(%esp)
080e53f6 +0x04e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e53fb +0x053:  mov    %edi,%eax
080e53fd +0x055:  mov    %esi,%edx
080e53ff +0x057:  mov    %eax,(%esp)
080e5402 +0x05a:  call   08ae3750 <_Unwind_Resume>
080e5407 +0x05f:  mov    %ebx,%eax
080e5409 +0x061:  mov    %eax,-0x1c(%ebp)
080e540c +0x064:  mov    0xc(%ebp),%eax
080e540f +0x067:  mov    (%eax),%eax
080e5411 +0x069:  mov    %eax,0x4(%esp)
080e5415 +0x06d:  mov    -0x1c(%ebp),%eax
080e5418 +0x070:  mov    %eax,(%esp)
080e541b +0x073:  call   080e5f74 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0xaa>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0xaa
080e5420 +0x078:  jmp    080e54c7 <+0x11f>
080e5425 +0x07d:  movl   $0x20,(%esp)
080e542c +0x084:  call   08724450 <_Znwj>  ; operator new(unsigned int)
080e5431 +0x089:  mov    %eax,%ebx
080e5433 +0x08b:  mov    %ebx,%eax
080e5435 +0x08d:  mov    %eax,(%esp)
080e5438 +0x090:  call   080e5f9e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0xd4>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0xd4
080e543d +0x095:  jmp    080e5457 <+0xaf>
080e543f +0x097:  mov    %edx,%esi
080e5441 +0x099:  mov    %eax,%edi
080e5443 +0x09b:  mov    %ebx,(%esp)
080e5446 +0x09e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e544b +0x0a3:  mov    %edi,%eax
080e544d +0x0a5:  mov    %esi,%edx
080e544f +0x0a7:  mov    %eax,(%esp)
080e5452 +0x0aa:  call   08ae3750 <_Unwind_Resume>
080e5457 +0x0af:  mov    %ebx,%eax
080e5459 +0x0b1:  mov    %eax,-0x1c(%ebp)
080e545c +0x0b4:  mov    0xc(%ebp),%eax
080e545f +0x0b7:  mov    (%eax),%eax
080e5461 +0x0b9:  mov    %eax,0x4(%esp)
080e5465 +0x0bd:  mov    -0x1c(%ebp),%eax
080e5468 +0x0c0:  mov    %eax,(%esp)
080e546b +0x0c3:  call   080e5f74 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0xaa>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0xaa
080e5470 +0x0c8:  jmp    080e54c7 <+0x11f>
080e5472 +0x0ca:  movl   $0x24,(%esp)
080e5479 +0x0d1:  call   08724450 <_Znwj>  ; operator new(unsigned int)
080e547e +0x0d6:  mov    %eax,%ebx
080e5480 +0x0d8:  mov    0xc(%ebp),%eax
080e5483 +0x0db:  mov    0x8(%eax),%edx
080e5486 +0x0de:  mov    %ebx,%eax
080e5488 +0x0e0:  mov    %edx,0x4(%esp)
080e548c +0x0e4:  mov    %eax,(%esp)
080e548f +0x0e7:  call   080e5fba <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0xf0>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0xf0
080e5494 +0x0ec:  jmp    080e54ae <+0x106>
080e5496 +0x0ee:  mov    %edx,%esi
080e5498 +0x0f0:  mov    %eax,%edi
080e549a +0x0f2:  mov    %ebx,(%esp)
080e549d +0x0f5:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
080e54a2 +0x0fa:  mov    %edi,%eax
080e54a4 +0x0fc:  mov    %esi,%edx
080e54a6 +0x0fe:  mov    %eax,(%esp)
080e54a9 +0x101:  call   08ae3750 <_Unwind_Resume>
080e54ae +0x106:  mov    %ebx,%eax
080e54b0 +0x108:  mov    %eax,-0x1c(%ebp)
080e54b3 +0x10b:  mov    0xc(%ebp),%eax
080e54b6 +0x10e:  mov    (%eax),%eax
080e54b8 +0x110:  mov    %eax,0x4(%esp)
080e54bc +0x114:  mov    -0x1c(%ebp),%eax
080e54bf +0x117:  mov    %eax,(%esp)
080e54c2 +0x11a:  call   080e5f74 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0xaa>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0xaa
080e54c7 +0x11f:  mov    -0x1c(%ebp),%eax
080e54ca +0x122:  add    $0x2c,%esp
080e54cd +0x125:  pop    %ebx
080e54ce +0x126:  pop    %esi
080e54cf +0x127:  pop    %edi
080e54d0 +0x128:  pop    %ebp
080e54d1 +0x129:  ret
```

## 反编译 C

```c
// CChattingEmoticonList::Factory @ 0x80e53a8

/* CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&) */

ChattingEmoticon_byEvent * __thiscall
CChattingEmoticonList::Factory(CChattingEmoticonList *this,EmoticonScript *param_1)

{
  int iVar1;
  ChattingEmoticon_byEvent *local_20;
  
  local_20 = (ChattingEmoticon_byEvent *)0x0;
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 2) {
    local_20 = operator_new(0x20);
                    /* try { // try from 080e5438 to 080e543c has its CatchHandler @ 080e543f */
    ChattingEmoticon_byPremium::ChattingEmoticon_byPremium((ChattingEmoticon_byPremium *)local_20);
    ChattingEmoticonBase::SetIndex((ChattingEmoticonBase *)local_20,*(int *)param_1);
  }
  else if (iVar1 == 4) {
    local_20 = operator_new(0x24);
                    /* try { // try from 080e548f to 080e5493 has its CatchHandler @ 080e5496 */
    ChattingEmoticon_byLevel::ChattingEmoticon_byLevel
              ((ChattingEmoticon_byLevel *)local_20,*(int *)(param_1 + 8));
    ChattingEmoticonBase::SetIndex((ChattingEmoticonBase *)local_20,*(int *)param_1);
  }
  else if (iVar1 == 1) {
    local_20 = operator_new(0x20);
                    /* try { // try from 080e53e8 to 080e53ec has its CatchHandler @ 080e53ef */
    ChattingEmoticon_byEvent::ChattingEmoticon_byEvent(local_20);
    ChattingEmoticonBase::SetIndex((ChattingEmoticonBase *)local_20,*(int *)param_1);
  }
  return local_20;
}
```

# dispatch

`_ZN14DB_UpdateQuest8dispatchEiiP6Stream`

`DB_UpdateQuest::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateQuest` | `0x08418bde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08418bde  _ZN14DB_UpdateQuest8dispatchEiiP6Stream
#           DB_UpdateQuest::dispatch(int, int, Stream*)
# range [0x08418bde, 0x08418c1b]
08418bde +0x00:  push   %ebp
08418bdf +0x01:  mov    %esp,%ebp
08418be1 +0x03:  sub    $0x28,%esp
08418be4 +0x06:  movb   $0x0,-0xd(%ebp)
08418be8 +0x0a:  mov    0x14(%ebp),%eax
08418beb +0x0d:  mov    %eax,(%esp)
08418bee +0x10:  call   08450ecc <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3ae2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3ae2
08418bf3 +0x15:  mov    %eax,-0xc(%ebp)
08418bf6 +0x18:  cmpl   $0x0,-0xc(%ebp)
08418bfa +0x1c:  jne    08418c03 <+0x25>
08418bfc +0x1e:  mov    $0x0,%eax
08418c01 +0x23:  jmp    08418c19 <+0x3b>
08418c03 +0x25:  mov    -0xc(%ebp),%eax
08418c06 +0x28:  mov    %eax,0x4(%esp)
08418c0a +0x2c:  mov    0x8(%ebp),%eax
08418c0d +0x2f:  mov    %eax,(%esp)
08418c10 +0x32:  call   08418c1c <_ZN14DB_UpdateQuest13_updateQuestsEP16SIG_UPDATE_QUEST>  ; DB_UpdateQuest::_updateQuests(SIG_UPDATE_QUEST*)
08418c15 +0x37:  movzbl -0xd(%ebp),%eax
08418c19 +0x3b:  leave
08418c1a +0x3c:  ret
08418c1b +0x3d:  nop
```

## 反编译 C

```c
// DB_UpdateQuest::dispatch @ 0x8418bde

/* DB_UpdateQuest::dispatch(int, int, Stream*) */

undefined1 __thiscall
DB_UpdateQuest::dispatch(DB_UpdateQuest *this,int param_1,int param_2,Stream *param_3)

{
  SIG_UPDATE_QUEST *pSVar1;
  
  pSVar1 = Stream::GetOutBuffer<SIG_UPDATE_QUEST>(param_3);
  if (pSVar1 != (SIG_UPDATE_QUEST *)0x0) {
    _updateQuests(this,pSVar1);
  }
  return 0;
}
```

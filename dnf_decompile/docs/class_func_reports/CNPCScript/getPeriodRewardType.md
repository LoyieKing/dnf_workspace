# getPeriodRewardType

`_ZNK10CNPCScript19getPeriodRewardTypeEv`

`CNPCScript::getPeriodRewardType() const`

| 类 | 地址 |
|---|---|
| `CNPCScript` | `0x085811a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085811a4  _ZNK10CNPCScript19getPeriodRewardTypeEv
#           CNPCScript::getPeriodRewardType() const
# range [0x085811a4, 0x085811f7]
085811a4 +0x00:  push   %ebp
085811a5 +0x01:  mov    %esp,%ebp
085811a7 +0x03:  sub    $0x18,%esp
085811aa +0x06:  mov    0x8(%ebp),%eax
085811ad +0x09:  add    $0x674,%eax
085811b2 +0x0e:  movl   $"item",0x4(%esp)
085811ba +0x16:  mov    %eax,(%esp)
085811bd +0x19:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
085811c2 +0x1e:  test   %al,%al
085811c4 +0x20:  je     085811cd <+0x29>
085811c6 +0x22:  mov    $0x1,%eax
085811cb +0x27:  jmp    085811f5 <+0x51>
085811cd +0x29:  mov    0x8(%ebp),%eax
085811d0 +0x2c:  add    $0x674,%eax
085811d5 +0x31:  movl   $"quest",0x4(%esp)
085811dd +0x39:  mov    %eax,(%esp)
085811e0 +0x3c:  call   080809a1 <_GLOBAL__I__ZN14CNRDScriptDataC2Ev+0x9c7>  ; global constructors keyed to CNRDScriptData::CNRDScriptData()+0x9c7
085811e5 +0x41:  test   %al,%al
085811e7 +0x43:  je     085811f0 <+0x4c>
085811e9 +0x45:  mov    $0x2,%eax
085811ee +0x4a:  jmp    085811f5 <+0x51>
085811f0 +0x4c:  mov    $0x0,%eax
085811f5 +0x51:  leave
085811f6 +0x52:  ret
085811f7 +0x53:  nop
```

## 反编译 C

```c
// CNPCScript::getPeriodRewardType @ 0x85811a4

/* CNPCScript::getPeriodRewardType() const */

undefined4 __thiscall CNPCScript::getPeriodRewardType(CNPCScript *this)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = std::operator==((string *)(this + 0x674),"item");
  if (bVar1) {
    uVar2 = 1;
  }
  else {
    bVar1 = std::operator==((string *)(this + 0x674),"quest");
    if (bVar1) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```

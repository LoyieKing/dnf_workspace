# is_eventing

`_ZN13EventClassify15CEventScriptMng11is_eventingEi`

`EventClassify::CEventScriptMng::is_eventing(int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810ba36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810ba36  _ZN13EventClassify15CEventScriptMng11is_eventingEi
#           EventClassify::CEventScriptMng::is_eventing(int)
# range [0x0810ba36, 0x0810ba79]
0810ba36 +0x00:  push   %ebp
0810ba37 +0x01:  mov    %esp,%ebp
0810ba39 +0x03:  sub    $0x18,%esp
0810ba3c +0x06:  mov    0xc(%ebp),%eax
0810ba3f +0x09:  test   %eax,%eax
0810ba41 +0x0b:  js     0810ba72 <+0x3c>
0810ba43 +0x0d:  mov    0xc(%ebp),%eax
0810ba46 +0x10:  cmp    $0x19c,%eax
0810ba4b +0x15:  jg     0810ba72 <+0x3c>
0810ba4d +0x17:  mov    0x8(%ebp),%eax
0810ba50 +0x1a:  lea    0x30(%eax),%edx
0810ba53 +0x1d:  lea    0xc(%ebp),%eax
0810ba56 +0x20:  mov    %eax,0x4(%esp)
0810ba5a +0x24:  mov    %edx,(%esp)
0810ba5d +0x27:  call   081116c4 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xbd6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xbd6
0810ba62 +0x2c:  mov    (%eax),%eax
0810ba64 +0x2e:  mov    (%eax),%edx
0810ba66 +0x30:  add    $0x8,%edx
0810ba69 +0x33:  mov    (%edx),%edx
0810ba6b +0x35:  mov    %eax,(%esp)
0810ba6e +0x38:  call   *%edx
0810ba70 +0x3a:  jmp    0810ba77 <+0x41>
0810ba72 +0x3c:  mov    $0x0,%eax
0810ba77 +0x41:  leave
0810ba78 +0x42:  ret
0810ba79 +0x43:  nop
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::is_eventing @ 0x810ba36

/* EventClassify::CEventScriptMng::is_eventing(int) */

undefined4 __thiscall EventClassify::CEventScriptMng::is_eventing(CEventScriptMng *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((param_1 < 0) || (0x19c < param_1)) {
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined4 *)
             std::
             map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
             ::operator[]((map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
                           *)(this + 0x30),&param_1);
    uVar2 = (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
  }
  return uVar2;
}
```

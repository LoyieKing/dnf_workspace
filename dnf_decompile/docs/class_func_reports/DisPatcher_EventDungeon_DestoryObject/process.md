# process

`_ZN37DisPatcher_EventDungeon_DestoryObject7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_EventDungeon_DestoryObject::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_EventDungeon_DestoryObject` | `0x0812bd8c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812bd8c  _ZN37DisPatcher_EventDungeon_DestoryObject7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_EventDungeon_DestoryObject::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x0812bd8c, 0x0812bdcb]
0812bd8c +0x00:  push   %ebp
0812bd8d +0x01:  mov    %esp,%ebp
0812bd8f +0x03:  sub    $0x1c,%esp
0812bd92 +0x06:  mov    0x10(%ebp),%eax
0812bd95 +0x09:  mov    %eax,-0x8(%ebp)
0812bd98 +0x0c:  mov    0x14(%ebp),%eax
0812bd9b +0x0f:  mov    %eax,-0x4(%ebp)
0812bd9e +0x12:  mov    -0x8(%ebp),%eax
0812bda1 +0x15:  movzwl 0xe(%eax),%edx
0812bda5 +0x19:  mov    -0x4(%ebp),%eax
0812bda8 +0x1c:  mov    %dx,0x4(%eax)
0812bdac +0x20:  mov    -0x8(%ebp),%eax
0812bdaf +0x23:  mov    %eax,0x8(%esp)
0812bdb3 +0x27:  mov    0xc(%ebp),%eax
0812bdb6 +0x2a:  mov    %eax,0x4(%esp)
0812bdba +0x2e:  mov    0x8(%ebp),%eax
0812bdbd +0x31:  mov    %eax,(%esp)
0812bdc0 +0x34:  call   0812bd82 <_ZN37DisPatcher_EventDungeon_DestoryObject11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_EventDungeon_DestoryObject::check_error(CUser*, MSG_BASE&)
0812bdc5 +0x39:  mov    $0x0,%eax
0812bdca +0x3e:  leave
0812bdcb +0x3f:  ret
```

## 反编译 C

```c
// DisPatcher_EventDungeon_DestoryObject::process @ 0x812bd8c

/* DisPatcher_EventDungeon_DestoryObject::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_EventDungeon_DestoryObject::process
          (DisPatcher_EventDungeon_DestoryObject *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  *(undefined2 *)(param_3 + 4) = *(undefined2 *)(param_2 + 0xe);
  check_error((CUser *)this,(MSG_BASE *)param_1);
  return 0;
}
```

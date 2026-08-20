# process

`_ZN33DisPatcher_EventDungeon_ClearRoom7processEP5CUserR8MSG_BASER9ParamBase`

`DisPatcher_EventDungeon_ClearRoom::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_EventDungeon_ClearRoom` | `0x0812beba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812beba  _ZN33DisPatcher_EventDungeon_ClearRoom7processEP5CUserR8MSG_BASER9ParamBase
#           DisPatcher_EventDungeon_ClearRoom::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x0812beba, 0x0812bf15]
0812beba +0x00:  push   %ebp
0812bebb +0x01:  mov    %esp,%ebp
0812bebd +0x03:  sub    $0x1c,%esp
0812bec0 +0x06:  mov    0x10(%ebp),%eax
0812bec3 +0x09:  mov    %eax,-0x8(%ebp)
0812bec6 +0x0c:  mov    0x14(%ebp),%eax
0812bec9 +0x0f:  mov    %eax,-0x4(%ebp)
0812becc +0x12:  mov    -0x8(%ebp),%eax
0812becf +0x15:  movzwl 0xe(%eax),%edx
0812bed3 +0x19:  mov    -0x4(%ebp),%eax
0812bed6 +0x1c:  mov    %dx,0x4(%eax)
0812beda +0x20:  mov    -0x8(%ebp),%eax
0812bedd +0x23:  movzwl 0x12(%eax),%edx
0812bee1 +0x27:  mov    -0x4(%ebp),%eax
0812bee4 +0x2a:  mov    %dx,0x8(%eax)
0812bee8 +0x2e:  mov    -0x8(%ebp),%eax
0812beeb +0x31:  movzwl 0x10(%eax),%edx
0812beef +0x35:  mov    -0x4(%ebp),%eax
0812bef2 +0x38:  mov    %dx,0x6(%eax)
0812bef6 +0x3c:  mov    -0x8(%ebp),%eax
0812bef9 +0x3f:  mov    %eax,0x8(%esp)
0812befd +0x43:  mov    0xc(%ebp),%eax
0812bf00 +0x46:  mov    %eax,0x4(%esp)
0812bf04 +0x4a:  mov    0x8(%ebp),%eax
0812bf07 +0x4d:  mov    %eax,(%esp)
0812bf0a +0x50:  call   0812beb0 <_ZN33DisPatcher_EventDungeon_ClearRoom11check_errorEP5CUserR8MSG_BASE>  ; DisPatcher_EventDungeon_ClearRoom::check_error(CUser*, MSG_BASE&)
0812bf0f +0x55:  mov    $0x0,%eax
0812bf14 +0x5a:  leave
0812bf15 +0x5b:  ret
```

## 反编译 C

```c
// DisPatcher_EventDungeon_ClearRoom::process @ 0x812beba

/* DisPatcher_EventDungeon_ClearRoom::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_EventDungeon_ClearRoom::process
          (DisPatcher_EventDungeon_ClearRoom *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  *(undefined2 *)(param_3 + 4) = *(undefined2 *)(param_2 + 0xe);
  *(undefined2 *)(param_3 + 8) = *(undefined2 *)(param_2 + 0x12);
  *(undefined2 *)(param_3 + 6) = *(undefined2 *)(param_2 + 0x10);
  check_error((CUser *)this,(MSG_BASE *)param_1);
  return 0;
}
```

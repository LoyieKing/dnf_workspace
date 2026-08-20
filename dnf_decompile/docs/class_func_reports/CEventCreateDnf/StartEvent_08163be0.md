# StartEvent

`_ZN15CEventCreateDnf10StartEventE10Word_Param`

`CEventCreateDnf::StartEvent(Word_Param)`

| 类 | 地址 |
|---|---|
| `CEventCreateDnf` | `0x08163be0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08163be0  _ZN15CEventCreateDnf10StartEventE10Word_Param
#           CEventCreateDnf::StartEvent(Word_Param)
# range [0x08163be0, 0x08163ccf]
08163be0 +0x00:  push   %ebp
08163be1 +0x01:  mov    %esp,%ebp
08163be3 +0x03:  sub    $0x38,%esp
08163be6 +0x06:  lea    0xc(%ebp),%eax
08163be9 +0x09:  mov    %eax,-0xc(%ebp)
08163bec +0x0c:  mov    -0xc(%ebp),%eax
08163bef +0x0f:  movzbl (%eax),%edx
08163bf2 +0x12:  mov    0x8(%ebp),%eax
08163bf5 +0x15:  mov    %dl,0x10(%eax)
08163bf8 +0x18:  mov    -0xc(%ebp),%eax
08163bfb +0x1b:  movzbl 0x1(%eax),%edx
08163bff +0x1f:  mov    0x8(%ebp),%eax
08163c02 +0x22:  mov    %dl,0x11(%eax)
08163c05 +0x25:  mov    -0xc(%ebp),%eax
08163c08 +0x28:  movzbl 0x2(%eax),%eax
08163c0c +0x2c:  movzbl %al,%eax
08163c0f +0x2f:  shl    $0x2,%eax
08163c12 +0x32:  mov    %eax,%edx
08163c14 +0x34:  shl    $0x4,%edx
08163c17 +0x37:  sub    %ax,%dx
08163c1a +0x3a:  mov    0x8(%ebp),%eax
08163c1d +0x3d:  mov    %dx,0x12(%eax)
08163c21 +0x41:  mov    0x8(%ebp),%eax
08163c24 +0x44:  movzbl 0x10(%eax),%eax
08163c28 +0x48:  cmp    $0x17,%al
08163c2a +0x4a:  ja     08163c65 <+0x85>
08163c2c +0x4c:  mov    0x8(%ebp),%eax
08163c2f +0x4f:  movzbl 0x11(%eax),%eax
08163c33 +0x53:  cmp    $0x17,%al
08163c35 +0x55:  ja     08163c65 <+0x85>
08163c37 +0x57:  mov    0x8(%ebp),%eax
08163c3a +0x5a:  movzwl 0x12(%eax),%eax
08163c3e +0x5e:  cmp    $0x3b,%ax
08163c42 +0x62:  jbe    08163c65 <+0x85>
08163c44 +0x64:  mov    0x8(%ebp),%eax
08163c47 +0x67:  movzwl 0x12(%eax),%eax
08163c4b +0x6b:  cmp    $0xe10,%ax
08163c4f +0x6f:  ja     08163c65 <+0x85>
08163c51 +0x71:  mov    0x8(%ebp),%eax
08163c54 +0x74:  mov    (%eax),%eax
08163c56 +0x76:  add    $0x8,%eax
08163c59 +0x79:  mov    (%eax),%edx
08163c5b +0x7b:  mov    0x8(%ebp),%eax
08163c5e +0x7e:  mov    %eax,(%esp)
08163c61 +0x81:  call   *%edx
08163c63 +0x83:  jmp    08163ccd <+0xed>
08163c65 +0x85:  mov    0x8(%ebp),%eax
08163c68 +0x88:  movzwl 0x12(%eax),%eax
08163c6c +0x8c:  movzwl %ax,%ecx
08163c6f +0x8f:  mov    0x8(%ebp),%eax
08163c72 +0x92:  movzbl 0x11(%eax),%eax
08163c76 +0x96:  movzbl %al,%edx
08163c79 +0x99:  mov    0x8(%ebp),%eax
08163c7c +0x9c:  movzbl 0x10(%eax),%eax
08163c80 +0xa0:  movzbl %al,%eax
08163c83 +0xa3:  mov    %ecx,0x1c(%esp)
08163c87 +0xa7:  mov    %edx,0x18(%esp)
08163c8b +0xab:  mov    %eax,0x14(%esp)
08163c8f +0xaf:  movl   $"[Taiwan, CreateDnfEvent] Error! startTime:%2dh, endTime:%2dh, reLoadInterval:%d",0x10(%esp)
08163c97 +0xb7:  movl   $0x31,0xc(%esp)
08163c9f +0xbf:  movl   $&_ZZN15CEventCreateDnf10StartEventE10Word_ParamE19__PRETTY_FUNCTION__,0x8(%esp)
08163ca7 +0xc7:  movl   $"localtaiwan/Event/EventCreateDnf.cpp",0x4(%esp)
08163caf +0xcf:  movl   $0x1,(%esp)
08163cb6 +0xd6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08163cbb +0xdb:  mov    0x8(%ebp),%eax
08163cbe +0xde:  mov    (%eax),%eax
08163cc0 +0xe0:  add    $0xc,%eax
08163cc3 +0xe3:  mov    (%eax),%edx
08163cc5 +0xe5:  mov    0x8(%ebp),%eax
08163cc8 +0xe8:  mov    %eax,(%esp)
08163ccb +0xeb:  call   *%edx
08163ccd +0xed:  leave
08163cce +0xee:  ret
08163ccf +0xef:  nop
```

## 反编译 C

```c
// CEventCreateDnf::StartEvent @ 0x8163be0

/* CEventCreateDnf::StartEvent(Word_Param) */

void __thiscall CEventCreateDnf::StartEvent(CEventCreateDnf *this,undefined4 param_2)

{
  this[0x10] = param_2._0_1_;
  this[0x11] = param_2._1_1_;
  *(ushort *)(this + 0x12) = (ushort)param_2._2_1_ * 0x40 + (ushort)param_2._2_1_ * -4;
  if (((((byte)this[0x10] < 0x18) && ((byte)this[0x11] < 0x18)) && (0x3b < *(ushort *)(this + 0x12))
      ) && (*(ushort *)(this + 0x12) < 0xe11)) {
    (**(code **)(*(int *)this + 8))(this);
  }
  else {
    LogManager::logFormat
              (1,"localtaiwan/Event/EventCreateDnf.cpp",
               "virtual void CEventCreateDnf::StartEvent(Word_Param)",0x31,
               "[Taiwan, CreateDnfEvent] Error! startTime:%2dh, endTime:%2dh, reLoadInterval:%d",
               (uint)(byte)this[0x10],(uint)(byte)this[0x11],(uint)*(ushort *)(this + 0x12));
    (**(code **)(*(int *)this + 0xc))(this);
  }
  return;
}
```

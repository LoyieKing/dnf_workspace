# GetCalcDay

`_ZN19CerashopAddRestrictL10GetCalcDayEPKNS_9InfoDailyE`

`CerashopAddRestrict::GetCalcDay(CerashopAddRestrict::InfoDaily const*)`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict` | `0x080e10d7` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e10d7  _ZN19CerashopAddRestrictL10GetCalcDayEPKNS_9InfoDailyE
#           CerashopAddRestrict::GetCalcDay(CerashopAddRestrict::InfoDaily const*)
# range [0x080e10d7, 0x080e1195]
080e10d7 +0x00:  push   %ebp
080e10d8 +0x01:  mov    %esp,%ebp
080e10da +0x03:  sub    $0x58,%esp
080e10dd +0x06:  mov    0x8(%ebp),%eax
080e10e0 +0x09:  mov    0x10(%eax),%edx
080e10e3 +0x0c:  mov    0x8(%ebp),%eax
080e10e6 +0x0f:  mov    0xc(%eax),%eax
080e10e9 +0x12:  mov    %edx,%ecx
080e10eb +0x14:  sub    %eax,%ecx
080e10ed +0x16:  mov    $0xc22e4507,%edx
080e10f2 +0x1b:  mov    %ecx,%eax
080e10f4 +0x1d:  imul   %edx
080e10f6 +0x1f:  lea    (%edx,%ecx,1),%eax
080e10f9 +0x22:  mov    %eax,%edx
080e10fb +0x24:  sar    $0x10,%edx
080e10fe +0x27:  mov    %ecx,%eax
080e1100 +0x29:  sar    $0x1f,%eax
080e1103 +0x2c:  mov    %edx,%ecx
080e1105 +0x2e:  sub    %eax,%ecx
080e1107 +0x30:  mov    %ecx,%eax
080e1109 +0x32:  add    $0x1,%eax
080e110c +0x35:  mov    %eax,-0x10(%ebp)
080e110f +0x38:  mov    0x8(%ebp),%eax
080e1112 +0x3b:  mov    0x14(%eax),%eax
080e1115 +0x3e:  test   %eax,%eax
080e1117 +0x40:  jle    080e1122 <+0x4b>
080e1119 +0x42:  mov    0x8(%ebp),%eax
080e111c +0x45:  mov    0x14(%eax),%eax
080e111f +0x48:  mov    %eax,-0x10(%ebp)
080e1122 +0x4b:  mov    0x8(%ebp),%eax
080e1125 +0x4e:  mov    0xc(%eax),%eax
080e1128 +0x51:  mov    %eax,-0x14(%ebp)
080e112b +0x54:  movl   $0x0,(%esp)
080e1132 +0x5b:  call   0807d750 <_init+0x48>
080e1137 +0x60:  mov    %eax,-0xc(%ebp)
080e113a +0x63:  jmp    080e114e <+0x77>
080e113c +0x65:  mov    -0x10(%ebp),%eax
080e113f +0x68:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%edx
080e1145 +0x6e:  mov    -0x14(%ebp),%eax
080e1148 +0x71:  lea    (%edx,%eax,1),%eax
080e114b +0x74:  mov    %eax,-0x14(%ebp)
080e114e +0x77:  mov    -0x14(%ebp),%eax
080e1151 +0x7a:  cmp    -0xc(%ebp),%eax
080e1154 +0x7d:  setle  %al
080e1157 +0x80:  test   %al,%al
080e1159 +0x82:  jne    080e113c <+0x65>
080e115b +0x84:  lea    -0x40(%ebp),%eax
080e115e +0x87:  mov    %eax,0x4(%esp)
080e1162 +0x8b:  lea    -0x14(%ebp),%eax
080e1165 +0x8e:  mov    %eax,(%esp)
080e1168 +0x91:  call   0807e360 <_init+0xc58>
080e116d +0x96:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
080e1172 +0x9b:  mov    0x37c(%eax),%eax
080e1178 +0xa1:  mov    %eax,-0x38(%ebp)
080e117b +0xa4:  movl   $0x0,-0x3c(%ebp)
080e1182 +0xab:  movl   $0x0,-0x40(%ebp)
080e1189 +0xb2:  lea    -0x40(%ebp),%eax
080e118c +0xb5:  mov    %eax,(%esp)
080e118f +0xb8:  call   0807e820 <_init+0x1118>
080e1194 +0xbd:  leave
080e1195 +0xbe:  ret
```

## 反编译 C

```c
// CerashopAddRestrict::GetCalcDay @ 0x80e10d7

/* CerashopAddRestrict::GetCalcDay(CerashopAddRestrict::InfoDaily const*) */

void CerashopAddRestrict::GetCalcDay(InfoDaily *param_1)

{
  int iVar1;
  tm local_44;
  int local_18;
  int local_14;
  time_t local_10;
  
  local_14 = (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) / 0x15180 + 1;
  if (0 < *(int *)(param_1 + 0x14)) {
    local_14 = *(int *)(param_1 + 0x14);
  }
  local_18 = *(int *)(param_1 + 0xc);
  local_10 = time((time_t *)0x0);
  for (; local_18 <= local_10; local_18 = local_14 * 0x15180 + local_18) {
  }
  localtime_r(&local_18,&local_44);
  iVar1 = G_CEnvironment();
  local_44.tm_hour = *(int *)(iVar1 + 0x37c);
  local_44.tm_min = 0;
  local_44.tm_sec = 0;
  mktime(&local_44);
  return;
}
```

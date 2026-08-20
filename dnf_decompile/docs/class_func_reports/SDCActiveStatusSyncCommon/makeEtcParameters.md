# makeEtcParameters

`_ZN25SDCActiveStatusSyncCommon17makeEtcParametersE17ENUM_ACTIVESTATUSiPvPSt6vectorIiSaIiEEPi`

`SDCActiveStatusSyncCommon::makeEtcParameters(ENUM_ACTIVESTATUS, int, void*, std::vector<int, std::allocator<int> >*, int*)`

| 类 | 地址 |
|---|---|
| `SDCActiveStatusSyncCommon` | `0x0808d4b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808d4b4  _ZN25SDCActiveStatusSyncCommon17makeEtcParametersE17ENUM_ACTIVESTATUSiPvPSt6vectorIiSaIiEEPi
#           SDCActiveStatusSyncCommon::makeEtcParameters(ENUM_ACTIVESTATUS, int, void*, std::vector<int, std::allocator<int> >*, int*)
# range [0x0808d4b4, 0x0808d50d]
0808d4b4 +0x00:  push   %ebp
0808d4b5 +0x01:  mov    %esp,%ebp
0808d4b7 +0x03:  sub    $0x28,%esp
0808d4ba +0x06:  mov    0x18(%ebp),%eax
0808d4bd +0x09:  mov    %eax,-0xc(%ebp)
0808d4c0 +0x0c:  cmpl   $0x0,0x1c(%ebp)
0808d4c4 +0x10:  je     0808d4eb <+0x37>
0808d4c6 +0x12:  mov    0x14(%ebp),%eax
0808d4c9 +0x15:  mov    %eax,0xc(%esp)
0808d4cd +0x19:  mov    0x10(%ebp),%eax
0808d4d0 +0x1c:  mov    %eax,0x8(%esp)
0808d4d4 +0x20:  mov    0xc(%ebp),%eax
0808d4d7 +0x23:  mov    %eax,0x4(%esp)
0808d4db +0x27:  mov    0x8(%ebp),%eax
0808d4de +0x2a:  mov    %eax,(%esp)
0808d4e1 +0x2d:  call   0808dc7a <_ZN25SDCActiveStatusSyncCommon11getDurationE17ENUM_ACTIVESTATUSiPv>  ; SDCActiveStatusSyncCommon::getDuration(ENUM_ACTIVESTATUS, int, void*)
0808d4e6 +0x32:  mov    0x1c(%ebp),%edx
0808d4e9 +0x35:  mov    %eax,(%edx)
0808d4eb +0x37:  mov    -0xc(%ebp),%eax
0808d4ee +0x3a:  mov    %eax,0xc(%esp)
0808d4f2 +0x3e:  mov    0x10(%ebp),%eax
0808d4f5 +0x41:  mov    %eax,0x8(%esp)
0808d4f9 +0x45:  mov    0xc(%ebp),%eax
0808d4fc +0x48:  mov    %eax,0x4(%esp)
0808d500 +0x4c:  mov    0x8(%ebp),%eax
0808d503 +0x4f:  mov    %eax,(%esp)
0808d506 +0x52:  call   0808d50e <_ZN25SDCActiveStatusSyncCommon17makeEtcParametersE17ENUM_ACTIVESTATUSiRSt6vectorIiSaIiEE>  ; SDCActiveStatusSyncCommon::makeEtcParameters(ENUM_ACTIVESTATUS, int, std::vector<int, std::allocator<int> >&)
0808d50b +0x57:  leave
0808d50c +0x58:  ret
0808d50d +0x59:  nop
```

## 反编译 C

```c
// SDCActiveStatusSyncCommon::makeEtcParameters @ 0x808d4b4

/* SDCActiveStatusSyncCommon::makeEtcParameters(ENUM_ACTIVESTATUS, int, void*, std::vector<int,
   std::allocator<int> >*, int*) */

void __thiscall
SDCActiveStatusSyncCommon::makeEtcParameters
          (SDCActiveStatusSyncCommon *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  
  if (param_6 != (undefined4 *)0x0) {
    uVar1 = getDuration(this,param_2,param_3,param_4);
    *param_6 = uVar1;
  }
  makeEtcParameters(this,param_2,param_3,param_5);
  return;
}
```

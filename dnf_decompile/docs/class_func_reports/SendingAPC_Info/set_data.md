# set_data

`_ZN15SendingAPC_Info8set_dataERK8_APCInfo`

`SendingAPC_Info::set_data(_APCInfo const&)`

| 类 | 地址 |
|---|---|
| `SendingAPC_Info` | `0x085fe8e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fe8e0  _ZN15SendingAPC_Info8set_dataERK8_APCInfo
#           SendingAPC_Info::set_data(_APCInfo const&)
# range [0x085fe8e0, 0x085fe905]
085fe8e0 +0x00:  push   %ebp
085fe8e1 +0x01:  mov    %esp,%ebp
085fe8e3 +0x03:  push   %edi
085fe8e4 +0x04:  push   %esi
085fe8e5 +0x05:  push   %ebx
085fe8e6 +0x06:  mov    0x8(%ebp),%edx
085fe8e9 +0x09:  mov    0xc(%ebp),%eax
085fe8ec +0x0c:  lea    &_ZL14gUnicodeBuffer+0xce0c(%edx),%ebx
085fe8f2 +0x12:  mov    %eax,%edx
085fe8f4 +0x14:  mov    $0x2f,%eax
085fe8f9 +0x19:  mov    %ebx,%edi
085fe8fb +0x1b:  mov    %edx,%esi
085fe8fd +0x1d:  mov    %eax,%ecx
085fe8ff +0x1f:  rep movsl %ds:(%esi),%es:(%edi)
085fe901 +0x21:  pop    %ebx
085fe902 +0x22:  pop    %esi
085fe903 +0x23:  pop    %edi
085fe904 +0x24:  pop    %ebp
085fe905 +0x25:  ret
```

## 反编译 C

```c
// SendingAPC_Info::set_data @ 0x85fe8e0

/* SendingAPC_Info::set_data(_APCInfo const&) */

void __thiscall SendingAPC_Info::set_data(SendingAPC_Info *this,_APCInfo *param_1)

{
  int iVar1;
  SendingAPC_Info *pSVar2;
  
  pSVar2 = this + 0x17338;
  for (iVar1 = 0x2f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pSVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pSVar2 = pSVar2 + 4;
  }
  return;
}
```

# LoadScript

`_ZN8WongWork15CCompoundAvatar10LoadScriptEPKcS2_`

`WongWork::CCompoundAvatar::LoadScript(char const*, char const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CCompoundAvatar` | `0x08333ea6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08333ea6  _ZN8WongWork15CCompoundAvatar10LoadScriptEPKcS2_
#           WongWork::CCompoundAvatar::LoadScript(char const*, char const*)
# range [0x08333ea6, 0x08333ecb]
08333ea6 +0x00:  push   %ebp
08333ea7 +0x01:  mov    %esp,%ebp
08333ea9 +0x03:  sub    $0x18,%esp
08333eac +0x06:  mov    0x8(%ebp),%eax
08333eaf +0x09:  mov    %eax,0x8(%esp)
08333eb3 +0x0d:  mov    0x10(%ebp),%eax
08333eb6 +0x10:  mov    %eax,0x4(%esp)
08333eba +0x14:  mov    0xc(%ebp),%eax
08333ebd +0x17:  mov    %eax,(%esp)
08333ec0 +0x1a:  call   08903ea7 <_Z25importCompoundAvatarTablePKcS0_P22tagCompoundAvatarTable>  ; importCompoundAvatarTable(char const*, char const*, tagCompoundAvatarTable*)
08333ec5 +0x1f:  test   %eax,%eax
08333ec7 +0x21:  sete   %al
08333eca +0x24:  leave
08333ecb +0x25:  ret
```

## 反编译 C

```c
// WongWork::CCompoundAvatar::LoadScript @ 0x8333ea6

/* WongWork::CCompoundAvatar::LoadScript(char const*, char const*) */

bool __thiscall
WongWork::CCompoundAvatar::LoadScript(CCompoundAvatar *this,char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = importCompoundAvatarTable(param_1,param_2,(tagCompoundAvatarTable *)this);
  return iVar1 == 0;
}
```

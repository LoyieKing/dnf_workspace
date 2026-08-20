# FirstChild

`_ZNK11TiXmlHandle10FirstChildEPKc`

`TiXmlHandle::FirstChild(char const*) const`

| 类 | 地址 |
|---|---|
| `TiXmlHandle` | `0x087e1170` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e1170  _ZNK11TiXmlHandle10FirstChildEPKc
#           TiXmlHandle::FirstChild(char const*) const
# range [0x087e1170, 0x087e11d9]
087e1170 +0x00:  push   %ebp
087e1171 +0x01:  mov    %esp,%ebp
087e1173 +0x03:  push   %edi
087e1174 +0x04:  push   %esi
087e1175 +0x05:  push   %ebx
087e1176 +0x06:  sub    $0x1c,%esp
087e1179 +0x09:  mov    0xc(%ebp),%eax
087e117c +0x0c:  mov    0x8(%ebp),%edi
087e117f +0x0f:  mov    0x10(%ebp),%esi
087e1182 +0x12:  mov    (%eax),%eax
087e1184 +0x14:  test   %eax,%eax
087e1186 +0x16:  je     087e11c0 <+0x50>
087e1188 +0x18:  mov    0x18(%eax),%ebx
087e118b +0x1b:  test   %ebx,%ebx
087e118d +0x1d:  jne    087e119f <+0x2f>
087e118f +0x1f:  jmp    087e11c0 <+0x50>
087e1191 +0x21:  lea    0x0(%esi,%eiz,1),%esi
087e1198 +0x28:  mov    0x28(%ebx),%ebx
087e119b +0x2b:  test   %ebx,%ebx
087e119d +0x2d:  je     087e11c0 <+0x50>
087e119f +0x2f:  mov    0x20(%ebx),%eax
087e11a2 +0x32:  mov    %esi,0x4(%esp)
087e11a6 +0x36:  mov    %eax,(%esp)
087e11a9 +0x39:  call   0807e4e0 <_init+0xdd8>
087e11ae +0x3e:  test   %eax,%eax
087e11b0 +0x40:  jne    087e1198 <+0x28>
087e11b2 +0x42:  mov    %ebx,(%edi)
087e11b4 +0x44:  mov    %edi,%eax
087e11b6 +0x46:  add    $0x1c,%esp
087e11b9 +0x49:  pop    %ebx
087e11ba +0x4a:  pop    %esi
087e11bb +0x4b:  pop    %edi
087e11bc +0x4c:  pop    %ebp
087e11bd +0x4d:  ret    $0x4
087e11c0 +0x50:  movl   $0x0,(%edi)
087e11c6 +0x56:  mov    %edi,%eax
087e11c8 +0x58:  add    $0x1c,%esp
087e11cb +0x5b:  pop    %ebx
087e11cc +0x5c:  pop    %esi
087e11cd +0x5d:  pop    %edi
087e11ce +0x5e:  pop    %ebp
087e11cf +0x5f:  ret    $0x4
087e11d2 +0x62:  lea    0x0(%esi,%eiz,1),%esi
087e11d9 +0x69:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TiXmlHandle::FirstChild @ 0x87e1170

/* TiXmlHandle::FirstChild(char const*) const */

char * TiXmlHandle::FirstChild(char *param_1)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000008;
  char *in_stack_0000000c;
  
  if (*in_stack_00000008 != 0) {
    for (iVar1 = *(int *)(*in_stack_00000008 + 0x18); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x28)) {
      iVar2 = strcmp(*(char **)(iVar1 + 0x20),in_stack_0000000c);
      if (iVar2 == 0) {
        *(int *)param_1 = iVar1;
        return param_1;
      }
    }
  }
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  return param_1;
}
```

# Attribute

`_ZNK12TiXmlElement9AttributeEPKcPd`

`TiXmlElement::Attribute(char const*, double*) const`

| 类 | 地址 |
|---|---|
| `TiXmlElement` | `0x087e1240` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e1240  _ZNK12TiXmlElement9AttributeEPKcPd
#           TiXmlElement::Attribute(char const*, double*) const
# range [0x087e1240, 0x087e12ba]
087e1240 +0x00:  push   %ebp
087e1241 +0x01:  mov    %esp,%ebp
087e1243 +0x03:  push   %edi
087e1244 +0x04:  push   %esi
087e1245 +0x05:  push   %ebx
087e1246 +0x06:  sub    $0x1c,%esp
087e1249 +0x09:  mov    0x8(%ebp),%esi
087e124c +0x0c:  mov    0xc(%ebp),%edi
087e124f +0x0f:  mov    0x4c(%esi),%ebx
087e1252 +0x12:  add    $0x2c,%esi
087e1255 +0x15:  cmp    %esi,%ebx
087e1257 +0x17:  jne    087e1267 <+0x27>
087e1259 +0x19:  jmp    087e12a8 <+0x68>
087e125b +0x1b:  nop
087e125c +0x1c:  lea    0x0(%esi,%eiz,1),%esi
087e1260 +0x20:  mov    0x20(%ebx),%ebx
087e1263 +0x23:  cmp    %esi,%ebx
087e1265 +0x25:  je     087e12a8 <+0x68>
087e1267 +0x27:  mov    0x14(%ebx),%eax
087e126a +0x2a:  mov    %edi,0x4(%esp)
087e126e +0x2e:  mov    %eax,(%esp)
087e1271 +0x31:  call   0807e4e0 <_init+0xdd8>
087e1276 +0x36:  test   %eax,%eax
087e1278 +0x38:  jne    087e1260 <+0x20>
087e127a +0x3a:  mov    0x10(%ebp),%eax
087e127d +0x3d:  mov    0x18(%ebx),%ebx
087e1280 +0x40:  test   %eax,%eax
087e1282 +0x42:  je     087e129b <+0x5b>
087e1284 +0x44:  mov    0x10(%ebp),%eax
087e1287 +0x47:  movl   $"%lf",0x4(%esp)
087e128f +0x4f:  mov    %ebx,(%esp)
087e1292 +0x52:  mov    %eax,0x8(%esp)
087e1296 +0x56:  call   0807d9e0 <_init+0x2d8>
087e129b +0x5b:  add    $0x1c,%esp
087e129e +0x5e:  mov    %ebx,%eax
087e12a0 +0x60:  pop    %ebx
087e12a1 +0x61:  pop    %esi
087e12a2 +0x62:  pop    %edi
087e12a3 +0x63:  pop    %ebp
087e12a4 +0x64:  ret
087e12a5 +0x65:  lea    0x0(%esi),%esi
087e12a8 +0x68:  xor    %ebx,%ebx
087e12aa +0x6a:  add    $0x1c,%esp
087e12ad +0x6d:  mov    %ebx,%eax
087e12af +0x6f:  pop    %ebx
087e12b0 +0x70:  pop    %esi
087e12b1 +0x71:  pop    %edi
087e12b2 +0x72:  pop    %ebp
087e12b3 +0x73:  ret
087e12b4 +0x74:  lea    0x0(%esi),%esi
087e12ba +0x7a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TiXmlElement::Attribute @ 0x87e1240

/* TiXmlElement::Attribute(char const*, double*) const */

char * __thiscall TiXmlElement::Attribute(TiXmlElement *this,char *param_1,double *param_2)

{
  TiXmlElement *pTVar1;
  char *__s;
  int iVar2;
  
  pTVar1 = *(TiXmlElement **)(this + 0x4c);
  while( true ) {
    if (pTVar1 == this + 0x2c) {
      return (char *)0x0;
    }
    iVar2 = strcmp(*(char **)(pTVar1 + 0x14),param_1);
    if (iVar2 == 0) break;
    pTVar1 = *(TiXmlElement **)(pTVar1 + 0x20);
  }
  __s = *(char **)(pTVar1 + 0x18);
  if (param_2 != (double *)0x0) {
    sscanf(__s,"%lf",param_2);
  }
  return __s;
}
```

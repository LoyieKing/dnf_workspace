# StringEqual

`_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding`

`TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)`

| 类 | 地址 |
|---|---|
| `TiXmlBase` | `0x087e62f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087e62f0  _ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding
#           TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding)
# range [0x087e62f0, 0x087e647b]
087e62f0 +0x000:  push   %ebp
087e62f1 +0x001:  mov    %esp,%ebp
087e62f3 +0x003:  push   %edi
087e62f4 +0x004:  push   %esi
087e62f5 +0x005:  push   %ebx
087e62f6 +0x006:  sub    $0x2c,%esp
087e62f9 +0x009:  mov    0x8(%ebp),%edi
087e62fc +0x00c:  mov    0xc(%ebp),%ebx
087e62ff +0x00f:  movzbl 0x10(%ebp),%edx
087e6303 +0x013:  test   %edi,%edi
087e6305 +0x015:  je     087e645c <+0x16c>
087e630b +0x01b:  test   %ebx,%ebx
087e630d +0x01d:  je     087e6438 <+0x148>
087e6313 +0x023:  movzbl (%edi),%eax
087e6316 +0x026:  test   %al,%al
087e6318 +0x028:  je     087e6414 <+0x124>
087e631e +0x02e:  test   %dl,%dl
087e6320 +0x030:  jne    087e6340 <+0x50>
087e6322 +0x032:  movzbl (%ebx),%edx
087e6325 +0x035:  test   %dl,%dl
087e6327 +0x037:  jne    087e63e0 <+0xf0>
087e632d +0x03d:  mov    $0x1,%eax
087e6332 +0x042:  add    $0x2c,%esp
087e6335 +0x045:  pop    %ebx
087e6336 +0x046:  pop    %esi
087e6337 +0x047:  pop    %edi
087e6338 +0x048:  pop    %ebp
087e6339 +0x049:  ret
087e633a +0x04a:  lea    0x0(%esi),%esi
087e6340 +0x050:  movzbl (%ebx),%edx
087e6343 +0x053:  test   %dl,%dl
087e6345 +0x055:  je     087e632d <+0x3d>
087e6347 +0x057:  cmpl   $0x1,0x14(%ebp)
087e634b +0x05b:  mov    %edi,%esi
087e634d +0x05d:  je     087e6387 <+0x97>
087e634f +0x05f:  nop
087e6350 +0x060:  movsbl %al,%eax
087e6353 +0x063:  mov    %eax,(%esp)
087e6356 +0x066:  mov    %dl,-0x1c(%ebp)
087e6359 +0x069:  call   0807dcb0 <_init+0x5a8>
087e635e +0x06e:  movzbl -0x1c(%ebp),%edx
087e6362 +0x072:  movsbl %dl,%edx
087e6365 +0x075:  mov    %edx,(%esp)
087e6368 +0x078:  mov    %eax,%esi
087e636a +0x07a:  call   0807dcb0 <_init+0x5a8>
087e636f +0x07f:  cmp    %eax,%esi
087e6371 +0x081:  je     087e63c0 <+0xd0>
087e6373 +0x083:  cmpb   $0x0,(%ebx)
087e6376 +0x086:  sete   %al
087e6379 +0x089:  jmp    087e6332 <+0x42>
087e637b +0x08b:  nop
087e637c +0x08c:  lea    0x0(%esi,%eiz,1),%esi
087e6380 +0x090:  movzbl (%ebx),%edx
087e6383 +0x093:  test   %dl,%dl
087e6385 +0x095:  je     087e632d <+0x3d>
087e6387 +0x097:  movsbl %al,%eax
087e638a +0x09a:  mov    %eax,(%esp)
087e638d +0x09d:  mov    %dl,-0x1c(%ebp)
087e6390 +0x0a0:  call   0807dcb0 <_init+0x5a8>
087e6395 +0x0a5:  movzbl -0x1c(%ebp),%edx
087e6399 +0x0a9:  movsbl %dl,%edx
087e639c +0x0ac:  mov    %edx,(%esp)
087e639f +0x0af:  mov    %eax,%edi
087e63a1 +0x0b1:  call   0807dcb0 <_init+0x5a8>
087e63a6 +0x0b6:  cmp    %eax,%edi
087e63a8 +0x0b8:  jne    087e6373 <+0x83>
087e63aa +0x0ba:  add    $0x1,%esi
087e63ad +0x0bd:  add    $0x1,%ebx
087e63b0 +0x0c0:  movzbl (%esi),%eax
087e63b3 +0x0c3:  test   %al,%al
087e63b5 +0x0c5:  jne    087e6380 <+0x90>
087e63b7 +0x0c7:  jmp    087e6373 <+0x83>
087e63b9 +0x0c9:  lea    0x0(%esi,%eiz,1),%esi
087e63c0 +0x0d0:  add    $0x1,%edi
087e63c3 +0x0d3:  add    $0x1,%ebx
087e63c6 +0x0d6:  movzbl (%edi),%eax
087e63c9 +0x0d9:  test   %al,%al
087e63cb +0x0db:  je     087e6373 <+0x83>
087e63cd +0x0dd:  movzbl (%ebx),%edx
087e63d0 +0x0e0:  test   %dl,%dl
087e63d2 +0x0e2:  je     087e632d <+0x3d>
087e63d8 +0x0e8:  jmp    087e6350 <+0x60>
087e63dd +0x0ed:  lea    0x0(%esi),%esi
087e63e0 +0x0f0:  cmp    %dl,%al
087e63e2 +0x0f2:  je     087e63f0 <+0x100>
087e63e4 +0x0f4:  xor    %eax,%eax
087e63e6 +0x0f6:  xchg   %ax,%ax
087e63e8 +0x0f8:  add    $0x2c,%esp
087e63eb +0x0fb:  pop    %ebx
087e63ec +0x0fc:  pop    %esi
087e63ed +0x0fd:  pop    %edi
087e63ee +0x0fe:  pop    %ebp
087e63ef +0x0ff:  ret
087e63f0 +0x100:  add    $0x1,%edi
087e63f3 +0x103:  add    $0x1,%ebx
087e63f6 +0x106:  movzbl (%edi),%edx
087e63f9 +0x109:  test   %dl,%dl
087e63fb +0x10b:  je     087e6373 <+0x83>
087e6401 +0x111:  movzbl (%ebx),%eax
087e6404 +0x114:  test   %al,%al
087e6406 +0x116:  je     087e632d <+0x3d>
087e640c +0x11c:  cmp    %al,%dl
087e640e +0x11e:  je     087e63f0 <+0x100>
087e6410 +0x120:  xor    %eax,%eax
087e6412 +0x122:  jmp    087e63e8 <+0xf8>
087e6414 +0x124:  movl   $&_ZZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncodingE19__PRETTY_FUNCTION__,0xc(%esp)
087e641c +0x12c:  movl   $0x21f,0x8(%esp)
087e6424 +0x134:  movl   $"tinyxmlparser.cpp",0x4(%esp)
087e642c +0x13c:  movl   $"0",(%esp)
087e6433 +0x143:  call   0807dc50 <_init+0x548>
087e6438 +0x148:  movl   $&_ZZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncodingE19__PRETTY_FUNCTION__,0xc(%esp)
087e6440 +0x150:  movl   $0x21c,0x8(%esp)
087e6448 +0x158:  movl   $"tinyxmlparser.cpp",0x4(%esp)
087e6450 +0x160:  movl   $"tag",(%esp)
087e6457 +0x167:  call   0807dc50 <_init+0x548>
087e645c +0x16c:  movl   $&_ZZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncodingE19__PRETTY_FUNCTION__,0xc(%esp)
087e6464 +0x174:  movl   $0x21b,0x8(%esp)
087e646c +0x17c:  movl   $"tinyxmlparser.cpp",0x4(%esp)
087e6474 +0x184:  movl   $"p",(%esp)
087e647b +0x18b:  call   0807dc50 <_init+0x548>
```

## 反编译 C

```c
// TiXmlBase::StringEqual @ 0x87e62f0

/* TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding) */

bool TiXmlBase::StringEqual(char *param_1,char *param_2,char param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("p","tinyxmlparser.cpp",0x21b,
                  "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                 );
  }
  if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("tag","tinyxmlparser.cpp",0x21c,
                  "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                 );
  }
  cVar1 = *param_1;
  if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0","tinyxmlparser.cpp",0x21f,
                  "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                 );
  }
  if (param_3 == '\0') {
    if (*param_2 != '\0') {
      if (cVar1 == *param_2) {
        do {
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
          if (*param_1 == '\0') {
LAB_087e6373:
            return *param_2 == '\0';
          }
          if (*param_2 == '\0') {
            return true;
          }
        } while (*param_1 == *param_2);
      }
      return false;
    }
  }
  else {
    cVar4 = *param_2;
    if (cVar4 != '\0') {
      if (param_4 == 1) {
        do {
          iVar2 = tolower((int)cVar1);
          iVar3 = tolower((int)cVar4);
          if (iVar2 != iVar3) goto LAB_087e6373;
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
          cVar1 = *param_1;
          if (cVar1 == '\0') goto LAB_087e6373;
          cVar4 = *param_2;
        } while (cVar4 != '\0');
      }
      else {
        do {
          iVar2 = tolower((int)cVar1);
          iVar3 = tolower((int)cVar4);
          if (iVar2 != iVar3) goto LAB_087e6373;
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
          cVar1 = *param_1;
          if (cVar1 == '\0') goto LAB_087e6373;
          cVar4 = *param_2;
        } while (cVar4 != '\0');
      }
    }
  }
  return true;
}
```

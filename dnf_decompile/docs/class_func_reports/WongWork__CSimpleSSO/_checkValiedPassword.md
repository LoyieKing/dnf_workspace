# _checkValiedPassword

`_ZN8WongWork10CSimpleSSO20_checkValiedPasswordEPcPKcR9CRijndael`

`WongWork::CSimpleSSO::_checkValiedPassword(char*, char const*, CRijndael&)`

| 类 | 地址 |
|---|---|
| `WongWork::CSimpleSSO` | `0x08602bd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08602bd0  _ZN8WongWork10CSimpleSSO20_checkValiedPasswordEPcPKcR9CRijndael
#           WongWork::CSimpleSSO::_checkValiedPassword(char*, char const*, CRijndael&)
# range [0x08602bd0, 0x08602da5]
08602bd0 +0x000:  push   %ebp
08602bd1 +0x001:  mov    %esp,%ebp
08602bd3 +0x003:  push   %esi
08602bd4 +0x004:  push   %ebx
08602bd5 +0x005:  sub    $0x140,%esp
08602bdb +0x00b:  mov    0xc(%ebp),%eax
08602bde +0x00e:  mov    %eax,(%esp)
08602be1 +0x011:  call   0807e3b0 <_init+0xca8>
08602be6 +0x016:  mov    %eax,-0x14(%ebp)
08602be9 +0x019:  movl   $0x0,-0x10(%ebp)
08602bf0 +0x020:  mov    0x14(%ebp),%eax
08602bf3 +0x023:  movl   $0x0,0x4(%esp)
08602bfb +0x02b:  mov    %eax,(%esp)
08602bfe +0x02e:  call   080b4416 <_ZN7IMethod12GetBlockSizeEPj>  ; IMethod::GetBlockSize(unsigned int*)
08602c03 +0x033:  mov    %eax,-0xc(%ebp)
08602c06 +0x036:  cmpl   $0x0,-0xc(%ebp)
08602c0a +0x03a:  js     08602c3c <+0x6c>
08602c0c +0x03c:  mov    -0x14(%ebp),%eax
08602c0f +0x03f:  mov    %eax,%edx
08602c11 +0x041:  sar    $0x1f,%edx
08602c14 +0x044:  idivl  -0xc(%ebp)
08602c17 +0x047:  mov    %edx,%eax
08602c19 +0x049:  test   %eax,%eax
08602c1b +0x04b:  je     08602c34 <+0x64>
08602c1d +0x04d:  mov    -0x14(%ebp),%eax
08602c20 +0x050:  mov    %eax,%edx
08602c22 +0x052:  sar    $0x1f,%edx
08602c25 +0x055:  idivl  -0xc(%ebp)
08602c28 +0x058:  add    $0x1,%eax
08602c2b +0x05b:  imul   -0xc(%ebp),%eax
08602c2f +0x05f:  mov    %eax,-0x10(%ebp)
08602c32 +0x062:  jmp    08602c42 <+0x72>
08602c34 +0x064:  mov    -0x14(%ebp),%eax
08602c37 +0x067:  mov    %eax,-0x10(%ebp)
08602c3a +0x06a:  jmp    08602c42 <+0x72>
08602c3c +0x06c:  mov    -0x14(%ebp),%eax
08602c3f +0x06f:  mov    %eax,-0x10(%ebp)
08602c42 +0x072:  cmpl   $0x0,-0xc(%ebp)
08602c46 +0x076:  js     08602c69 <+0x99>
08602c48 +0x078:  mov    0x14(%ebp),%eax
08602c4b +0x07b:  movl   $0x0,0xc(%esp)
08602c53 +0x083:  mov    -0x14(%ebp),%edx
08602c56 +0x086:  mov    %edx,0x8(%esp)
08602c5a +0x08a:  mov    0xc(%ebp),%edx
08602c5d +0x08d:  mov    %edx,0x4(%esp)
08602c61 +0x091:  mov    %eax,(%esp)
08602c64 +0x094:  call   080b44a6 <_ZN7IMethod3PadEPciPj>  ; IMethod::Pad(char*, int, unsigned int*)
08602c69 +0x099:  mov    0x14(%ebp),%eax
08602c6c +0x09c:  mov    (%eax),%eax
08602c6e +0x09e:  add    $0xc,%eax
08602c71 +0x0a1:  mov    (%eax),%edx
08602c73 +0x0a3:  mov    -0x10(%ebp),%eax
08602c76 +0x0a6:  mov    %eax,0xc(%esp)
08602c7a +0x0aa:  lea    -0x11c(%ebp),%eax
08602c80 +0x0b0:  mov    %eax,0x8(%esp)
08602c84 +0x0b4:  mov    0xc(%ebp),%eax
08602c87 +0x0b7:  mov    %eax,0x4(%esp)
08602c8b +0x0bb:  mov    0x14(%ebp),%eax
08602c8e +0x0be:  mov    %eax,(%esp)
08602c91 +0x0c1:  call   *%edx
08602c93 +0x0c3:  mov    -0x10(%ebp),%eax
08602c96 +0x0c6:  add    %eax,%eax
08602c98 +0x0c8:  add    $0x1,%eax
08602c9b +0x0cb:  mov    %eax,-0x14(%ebp)
08602c9e +0x0ce:  lea    -0x11c(%ebp),%eax
08602ca4 +0x0d4:  lea    -0x98(%ebp),%edx
08602caa +0x0da:  mov    %edx,0x8(%esp)
08602cae +0x0de:  mov    -0x10(%ebp),%edx
08602cb1 +0x0e1:  mov    %edx,0x4(%esp)
08602cb5 +0x0e5:  mov    %eax,(%esp)
08602cb8 +0x0e8:  call   08108873 <_ZN7DNFFLib10Binary2HexEPKhiPc>  ; DNFFLib::Binary2Hex(unsigned char const*, int, char*)
08602cbd +0x0ed:  mov    -0x14(%ebp),%eax
08602cc0 +0x0f0:  movb   $0x0,-0x98(%ebp,%eax,1)
08602cc8 +0x0f8:  movl   $0x84,0x8(%esp)
08602cd0 +0x100:  mov    0x10(%ebp),%eax
08602cd3 +0x103:  mov    %eax,0x4(%esp)
08602cd7 +0x107:  lea    -0x98(%ebp),%eax
08602cdd +0x10d:  mov    %eax,(%esp)
08602ce0 +0x110:  call   0807e8c0 <_init+0x11b8>
08602ce5 +0x115:  test   %eax,%eax
08602ce7 +0x117:  je     08602d51 <+0x181>
08602ce9 +0x119:  jmp    08602d58 <+0x188>
08602ceb +0x11b:  mov    %eax,(%esp)
08602cee +0x11e:  call   08725ce0 <__cxa_begin_catch>
08602cf3 +0x123:  mov    0x10(%ebp),%eax
08602cf6 +0x126:  mov    %eax,0x18(%esp)
08602cfa +0x12a:  lea    -0x98(%ebp),%eax
08602d00 +0x130:  mov    %eax,0x14(%esp)
08602d04 +0x134:  movl   $"_checkValiedPassword() exception server(%s), client(%s)",0x10(%esp)
08602d0c +0x13c:  movl   $0xe7,0xc(%esp)
08602d14 +0x144:  movl   $&_ZZN8WongWork10CSimpleSSO20_checkValiedPasswordEPcPKcR9CRijndaelE19__PRETTY_FUNCTION__,0x8(%esp)
08602d1c +0x14c:  movl   $"SimpleSSO.cpp",0x4(%esp)
08602d24 +0x154:  movl   $0x1,(%esp)
08602d2b +0x15b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08602d30 +0x160:  mov    $0x0,%ebx
08602d35 +0x165:  call   08725c30 <__cxa_end_catch>
08602d3a +0x16a:  jmp    08602d9a <+0x1ca>
08602d3c +0x16c:  mov    %edx,%ebx
08602d3e +0x16e:  mov    %eax,%esi
08602d40 +0x170:  call   08725c30 <__cxa_end_catch>
08602d45 +0x175:  mov    %esi,%eax
08602d47 +0x177:  mov    %ebx,%edx
08602d49 +0x179:  mov    %eax,(%esp)
08602d4c +0x17c:  call   08ae3750 <_Unwind_Resume>
08602d51 +0x181:  mov    $0x1,%ebx
08602d56 +0x186:  jmp    08602d9a <+0x1ca>
08602d58 +0x188:  mov    0x10(%ebp),%eax
08602d5b +0x18b:  mov    %eax,0x18(%esp)
08602d5f +0x18f:  lea    -0x98(%ebp),%eax
08602d65 +0x195:  mov    %eax,0x14(%esp)
08602d69 +0x199:  movl   $"_checkValiedPassword() diff password server(%s), client(%s)",0x10(%esp)
08602d71 +0x1a1:  movl   $0xee,0xc(%esp)
08602d79 +0x1a9:  movl   $&_ZZN8WongWork10CSimpleSSO20_checkValiedPasswordEPcPKcR9CRijndaelE19__PRETTY_FUNCTION__,0x8(%esp)
08602d81 +0x1b1:  movl   $"SimpleSSO.cpp",0x4(%esp)
08602d89 +0x1b9:  movl   $0x1,(%esp)
08602d90 +0x1c0:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08602d95 +0x1c5:  mov    $0x0,%ebx
08602d9a +0x1ca:  mov    %ebx,%eax
08602d9c +0x1cc:  add    $0x140,%esp
08602da2 +0x1d2:  pop    %ebx
08602da3 +0x1d3:  pop    %esi
08602da4 +0x1d4:  pop    %ebp
08602da5 +0x1d5:  ret
```

## 反编译 C

```c
// WongWork::CSimpleSSO::_checkValiedPassword @ 0x8602bd0

/* WongWork::CSimpleSSO::_checkValiedPassword(char*, char const*, CRijndael&) */

bool __thiscall
WongWork::CSimpleSSO::_checkValiedPassword
          (CSimpleSSO *this,char *param_1,char *param_2,CRijndael *param_3)

{
  int iVar1;
  uchar local_120 [132];
  char local_9c [132];
  size_t local_18;
  size_t local_14;
  int local_10;
  
  local_18 = strlen(param_1);
  local_14 = 0;
                    /* try { // try from 08602bfe to 08602cbc has its CatchHandler @ 08602ceb */
  local_10 = IMethod::GetBlockSize((IMethod *)param_3,(uint *)0x0);
  if (local_10 < 0) {
    local_14 = local_18;
  }
  else if ((int)local_18 % local_10 == 0) {
    local_14 = local_18;
  }
  else {
    local_14 = ((int)local_18 / local_10 + 1) * local_10;
  }
  if (-1 < local_10) {
    IMethod::Pad((IMethod *)param_3,param_1,local_18,(uint *)0x0);
  }
  (**(code **)(*(int *)param_3 + 0xc))(param_3,param_1,local_120,local_14);
  local_18 = local_14 * 2 + 1;
  DNFFLib::Binary2Hex(local_120,local_14,local_9c);
  local_9c[local_18] = '\0';
  iVar1 = strncmp(local_9c,param_2,0x84);
  if (iVar1 != 0) {
    LogManager::logFormat
              (1,"SimpleSSO.cpp",
               "bool WongWork::CSimpleSSO::_checkValiedPassword(char*, const char*, CRijndael&)",
               0xee,"_checkValiedPassword() diff password server(%s), client(%s)",local_9c,param_2);
  }
  return iVar1 == 0;
}
```

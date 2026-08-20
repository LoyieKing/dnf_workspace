# exportToFile

`_ZNK19ScriptStringManager12exportToFileEPKc`

`ScriptStringManager::exportToFile(char const*) const`

| 类 | 地址 |
|---|---|
| `ScriptStringManager` | `0x08acf2a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acf2a0  _ZNK19ScriptStringManager12exportToFileEPKc
#           ScriptStringManager::exportToFile(char const*) const
# range [0x08acf2a0, 0x08acf419]
08acf2a0 +0x000:  push   %ebp
08acf2a1 +0x001:  mov    %esp,%ebp
08acf2a3 +0x003:  push   %edi
08acf2a4 +0x004:  push   %esi
08acf2a5 +0x005:  push   %ebx
08acf2a6 +0x006:  sub    $0x3c,%esp
08acf2a9 +0x009:  mov    0xc(%ebp),%eax
08acf2ac +0x00c:  mov    0x8(%ebp),%ebx
08acf2af +0x00f:  movl   $0x0,-0x1c(%ebp)
08acf2b6 +0x016:  movl   $0x0,-0x20(%ebp)
08acf2bd +0x01d:  movl   $"wb",0x4(%esp)
08acf2c5 +0x025:  mov    %eax,(%esp)
08acf2c8 +0x028:  call   0807e770 <_init+0x1068>
08acf2cd +0x02d:  mov    %eax,%esi
08acf2cf +0x02f:  xor    %eax,%eax
08acf2d1 +0x031:  test   %esi,%esi
08acf2d3 +0x033:  je     08acf30f <+0x6f>
08acf2d5 +0x035:  mov    0x8(%ebx),%eax
08acf2d8 +0x038:  sub    0x4(%ebx),%eax
08acf2db +0x03b:  mov    %esi,0xc(%esp)
08acf2df +0x03f:  movl   $0x1,0x8(%esp)
08acf2e7 +0x047:  sar    $0x2,%eax
08acf2ea +0x04a:  mov    %eax,-0x1c(%ebp)
08acf2ed +0x04d:  lea    -0x1c(%ebp),%eax
08acf2f0 +0x050:  movl   $0x4,0x4(%esp)
08acf2f8 +0x058:  mov    %eax,(%esp)
08acf2fb +0x05b:  call   0807e320 <_init+0xc18>
08acf300 +0x060:  cmp    $0x1,%eax
08acf303 +0x063:  je     08acf318 <+0x78>
08acf305 +0x065:  mov    %esi,(%esp)
08acf308 +0x068:  call   0807dea0 <_init+0x798>
08acf30d +0x06d:  xor    %eax,%eax
08acf30f +0x06f:  add    $0x3c,%esp
08acf312 +0x072:  pop    %ebx
08acf313 +0x073:  pop    %esi
08acf314 +0x074:  pop    %edi
08acf315 +0x075:  pop    %ebp
08acf316 +0x076:  ret
08acf317 +0x077:  nop
08acf318 +0x078:  mov    0x8(%ebx),%eax
08acf31b +0x07b:  sub    0x4(%ebx),%eax
08acf31e +0x07e:  sar    $0x2,%eax
08acf321 +0x081:  lea    0x4(,%eax,4),%edx
08acf328 +0x088:  test   %eax,%eax
08acf32a +0x08a:  mov    %edx,-0x20(%ebp)
08acf32d +0x08d:  lea    -0x20(%ebp),%edx
08acf330 +0x090:  mov    %edx,-0x2c(%ebp)
08acf333 +0x093:  jle    08acf377 <+0xd7>
08acf335 +0x095:  xor    %edi,%edi
08acf337 +0x097:  nop
08acf338 +0x098:  mov    -0x2c(%ebp),%edx
08acf33b +0x09b:  mov    %esi,0xc(%esp)
08acf33f +0x09f:  movl   $0x1,0x8(%esp)
08acf347 +0x0a7:  movl   $0x4,0x4(%esp)
08acf34f +0x0af:  mov    %edx,(%esp)
08acf352 +0x0b2:  call   0807e320 <_init+0xc18>
08acf357 +0x0b7:  cmp    $0x1,%eax
08acf35a +0x0ba:  jne    08acf305 <+0x65>
08acf35c +0x0bc:  mov    0x4(%ebx),%edx
08acf35f +0x0bf:  mov    (%edx,%edi,4),%eax
08acf362 +0x0c2:  add    $0x1,%edi
08acf365 +0x0c5:  mov    -0xc(%eax),%eax
08acf368 +0x0c8:  add    %eax,-0x20(%ebp)
08acf36b +0x0cb:  mov    0x8(%ebx),%eax
08acf36e +0x0ce:  sub    %edx,%eax
08acf370 +0x0d0:  sar    $0x2,%eax
08acf373 +0x0d3:  cmp    %eax,%edi
08acf375 +0x0d5:  jl     08acf338 <+0x98>
08acf377 +0x0d7:  mov    -0x2c(%ebp),%eax
08acf37a +0x0da:  mov    %esi,0xc(%esp)
08acf37e +0x0de:  movl   $0x1,0x8(%esp)
08acf386 +0x0e6:  movl   $0x4,0x4(%esp)
08acf38e +0x0ee:  mov    %eax,(%esp)
08acf391 +0x0f1:  call   0807e320 <_init+0xc18>
08acf396 +0x0f6:  cmp    $0x1,%eax
08acf399 +0x0f9:  jne    08acf305 <+0x65>
08acf39f +0x0ff:  mov    0x8(%ebx),%ecx
08acf3a2 +0x102:  mov    0x4(%ebx),%eax
08acf3a5 +0x105:  mov    %ecx,%edx
08acf3a7 +0x107:  sub    %eax,%edx
08acf3a9 +0x109:  cmp    $0x3,%edx
08acf3ac +0x10c:  jle    08acf3fb <+0x15b>
08acf3ae +0x10e:  mov    %esi,-0x2c(%ebp)
08acf3b1 +0x111:  xor    %edi,%edi
08acf3b3 +0x113:  mov    %ecx,%esi
08acf3b5 +0x115:  jmp    08acf3c6 <+0x126>
08acf3b7 +0x117:  nop
08acf3b8 +0x118:  mov    %esi,%edx
08acf3ba +0x11a:  add    $0x1,%edi
08acf3bd +0x11d:  sub    %eax,%edx
08acf3bf +0x11f:  sar    $0x2,%edx
08acf3c2 +0x122:  cmp    %edx,%edi
08acf3c4 +0x124:  jge    08acf3f8 <+0x158>
08acf3c6 +0x126:  mov    (%eax,%edi,4),%edx
08acf3c9 +0x129:  mov    -0xc(%edx),%ecx
08acf3cc +0x12c:  test   %ecx,%ecx
08acf3ce +0x12e:  je     08acf3b8 <+0x118>
08acf3d0 +0x130:  mov    -0x2c(%ebp),%eax
08acf3d3 +0x133:  movl   $0x1,0x8(%esp)
08acf3db +0x13b:  mov    %ecx,0x4(%esp)
08acf3df +0x13f:  mov    %edx,(%esp)
08acf3e2 +0x142:  mov    %eax,0xc(%esp)
08acf3e6 +0x146:  call   0807e320 <_init+0xc18>
08acf3eb +0x14b:  cmp    $0x1,%eax
08acf3ee +0x14e:  jne    08acf40d <+0x16d>
08acf3f0 +0x150:  mov    0x4(%ebx),%eax
08acf3f3 +0x153:  mov    0x8(%ebx),%esi
08acf3f6 +0x156:  jmp    08acf3b8 <+0x118>
08acf3f8 +0x158:  mov    -0x2c(%ebp),%esi
08acf3fb +0x15b:  mov    %esi,(%esp)
08acf3fe +0x15e:  call   0807dea0 <_init+0x798>
08acf403 +0x163:  mov    $0x1,%eax
08acf408 +0x168:  jmp    08acf30f <+0x6f>
08acf40d +0x16d:  mov    -0x2c(%ebp),%esi
08acf410 +0x170:  jmp    08acf305 <+0x65>
08acf415 +0x175:  nop
08acf416 +0x176:  lea    0x0(%esi),%esi
08acf419 +0x179:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// ScriptStringManager::exportToFile @ 0x8acf2a0

/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: bool exportToFile(ScriptStringManager * this, TCHAR * fileName) */

bool __thiscall ScriptStringManager::exportToFile(ScriptStringManager *this,TCHAR *fileName)

{
  char *__ptr;
  FILE *__s;
  size_t sVar1;
  int iVar2;
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar3;
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar4;
  int local_24;
  int local_20 [4];
  
                    /* Unresolved local var: uint count@[???]
                       Unresolved local var: uint offset@[???]
                       Unresolved local var: FILE * file@[???] */
  local_20[0] = 0;
  local_24 = 0;
  __s = fopen(fileName,"wb");
  if (__s != (FILE *)0x0) {
    local_20[0] = (int)(this->strings_).
                       super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                       ._M_impl._M_finish -
                  (int)(this->strings_).
                       super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                       ._M_impl._M_start >> 2;
    sVar1 = fwrite(local_20,4,1,__s);
    if (sVar1 == 1) {
      iVar2 = (int)(this->strings_).
                   super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                   ._M_impl._M_finish -
              (int)(this->strings_).
                   super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                   ._M_impl._M_start >> 2;
      local_24 = iVar2 * 4 + 4;
                    /* Unresolved local var: int i@[???] */
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          sVar1 = fwrite(&local_24,4,1,__s);
          if (sVar1 != 1) goto LAB_08acf305;
          pbVar4 = (this->strings_).
                   super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                   ._M_impl._M_start;
          pbVar3 = pbVar4 + iVar2;
          iVar2 = iVar2 + 1;
          local_24 = local_24 + *(int *)((pbVar3->_M_dataplus)._M_p + -0xc);
        } while (iVar2 < (int)(this->strings_).
                              super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                              ._M_impl._M_finish - (int)pbVar4 >> 2);
      }
      sVar1 = fwrite(&local_24,4,1,__s);
      if (sVar1 == 1) {
                    /* Unresolved local var: int i@[???] */
        pbVar4 = (this->strings_).
                 super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                 ._M_impl._M_finish;
        pbVar3 = (this->strings_).
                 super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                 ._M_impl._M_start;
        if (3 < (int)pbVar4 - (int)pbVar3) {
          iVar2 = 0;
          do {
            __ptr = pbVar3[iVar2]._M_dataplus._M_p;
            sVar1 = *(size_t *)(__ptr + -0xc);
            if (sVar1 != 0) {
              sVar1 = fwrite(__ptr,sVar1,1,__s);
              if (sVar1 != 1) goto LAB_08acf305;
              pbVar3 = (this->strings_).
                       super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                       ._M_impl._M_start;
              pbVar4 = (this->strings_).
                       super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                       ._M_impl._M_finish;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)pbVar4 - (int)pbVar3 >> 2);
        }
        fclose(__s);
        return true;
      }
    }
LAB_08acf305:
    fclose(__s);
  }
  return false;
}
```

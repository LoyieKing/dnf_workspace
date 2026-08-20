# exportToBuffer

`_ZNK19ScriptStringManager14exportToBufferEPhi`

`ScriptStringManager::exportToBuffer(unsigned char*, int) const`

| 类 | 地址 |
|---|---|
| `ScriptStringManager` | `0x08acf420` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acf420  _ZNK19ScriptStringManager14exportToBufferEPhi
#           ScriptStringManager::exportToBuffer(unsigned char*, int) const
# range [0x08acf420, 0x08acf54c]
08acf420 +0x000:  push   %ebp
08acf421 +0x001:  mov    %esp,%ebp
08acf423 +0x003:  push   %edi
08acf424 +0x004:  push   %esi
08acf425 +0x005:  push   %ebx
08acf426 +0x006:  sub    $0x2c,%esp
08acf429 +0x009:  mov    0x8(%ebp),%esi
08acf42c +0x00c:  mov    0xc(%ebp),%ebx
08acf42f +0x00f:  mov    0x8(%esi),%eax
08acf432 +0x012:  mov    0x4(%esi),%edx
08acf435 +0x015:  sub    %edx,%eax
08acf437 +0x017:  sar    $0x2,%eax
08acf43a +0x01a:  mov    %eax,-0x1c(%ebp)
08acf43d +0x01d:  mov    %eax,(%ebx)
08acf43f +0x01f:  mov    $0xffffffff,%eax
08acf444 +0x024:  cmpl   $0x3,0x10(%ebp)
08acf448 +0x028:  jle    08acf532 <+0x112>
08acf44e +0x02e:  mov    0x8(%esi),%eax
08acf451 +0x031:  lea    0x4(%ebx),%edi
08acf454 +0x034:  mov    -0x1c(%ebp),%ecx
08acf457 +0x037:  sub    0x4(%esi),%eax
08acf45a +0x03a:  mov    %edi,-0x20(%ebp)
08acf45d +0x03d:  movl   $0x8,-0x24(%ebp)
08acf464 +0x044:  sar    $0x2,%eax
08acf467 +0x047:  test   %ecx,%ecx
08acf469 +0x049:  lea    0x4(,%eax,4),%edx
08acf470 +0x050:  jle    08acf4b5 <+0x95>
08acf472 +0x052:  mov    %edx,0x4(%ebx)
08acf475 +0x055:  xor    %ecx,%ecx
08acf477 +0x057:  mov    $0x8,%eax
08acf47c +0x05c:  cmpl   $0x7,0x10(%ebp)
08acf480 +0x060:  jg     08acf497 <+0x77>
08acf482 +0x062:  jmp    08acf52d <+0x10d>
08acf487 +0x067:  nop
08acf488 +0x068:  mov    %edx,(%ebx,%eax,1)
08acf48b +0x06b:  add    $0x4,%eax
08acf48e +0x06e:  cmp    %eax,0x10(%ebp)
08acf491 +0x071:  jl     08acf52d <+0x10d>
08acf497 +0x077:  lea    (%ebx,%eax,1),%edi
08acf49a +0x07a:  add    $0x1,%ecx
08acf49d +0x07d:  mov    %edi,-0x20(%ebp)
08acf4a0 +0x080:  mov    0x4(%esi),%edi
08acf4a3 +0x083:  mov    -0x8(%edi,%eax,1),%edi
08acf4a7 +0x087:  add    -0xc(%edi),%edx
08acf4aa +0x08a:  cmp    -0x1c(%ebp),%ecx
08acf4ad +0x08d:  jl     08acf488 <+0x68>
08acf4af +0x08f:  add    $0x4,%eax
08acf4b2 +0x092:  mov    %eax,-0x24(%ebp)
08acf4b5 +0x095:  mov    -0x20(%ebp),%eax
08acf4b8 +0x098:  mov    %edx,(%eax)
08acf4ba +0x09a:  mov    -0x24(%ebp),%edx
08acf4bd +0x09d:  mov    $0xffffffff,%eax
08acf4c2 +0x0a2:  cmp    %edx,0x10(%ebp)
08acf4c5 +0x0a5:  jl     08acf532 <+0x112>
08acf4c7 +0x0a7:  mov    0x4(%esi),%ecx
08acf4ca +0x0aa:  mov    0x8(%esi),%eax
08acf4cd +0x0ad:  mov    -0x20(%ebp),%edx
08acf4d0 +0x0b0:  sub    %ecx,%eax
08acf4d2 +0x0b2:  add    $0x4,%edx
08acf4d5 +0x0b5:  cmp    $0x3,%eax
08acf4d8 +0x0b8:  jle    08acf545 <+0x125>
08acf4da +0x0ba:  mov    %esi,-0x1c(%ebp)
08acf4dd +0x0bd:  xor    %edi,%edi
08acf4df +0x0bf:  mov    %edx,%esi
08acf4e1 +0x0c1:  mov    %ebx,-0x20(%ebp)
08acf4e4 +0x0c4:  mov    -0x24(%ebp),%ebx
08acf4e7 +0x0c7:  jmp    08acf504 <+0xe4>
08acf4e9 +0x0c9:  lea    0x0(%esi,%eiz,1),%esi
08acf4f0 +0x0d0:  mov    -0x1c(%ebp),%edx
08acf4f3 +0x0d3:  add    %eax,%esi
08acf4f5 +0x0d5:  add    $0x1,%edi
08acf4f8 +0x0d8:  mov    0x8(%edx),%eax
08acf4fb +0x0db:  sub    %ecx,%eax
08acf4fd +0x0dd:  sar    $0x2,%eax
08acf500 +0x0e0:  cmp    %eax,%edi
08acf502 +0x0e2:  jge    08acf540 <+0x120>
08acf504 +0x0e4:  mov    (%ecx,%edi,4),%eax
08acf507 +0x0e7:  mov    -0xc(%eax),%ecx
08acf50a +0x0ea:  mov    %eax,0x4(%esp)
08acf50e +0x0ee:  mov    %esi,(%esp)
08acf511 +0x0f1:  mov    %ecx,0x8(%esp)
08acf515 +0x0f5:  call   0807d8a0 <_init+0x198>
08acf51a +0x0fa:  mov    -0x1c(%ebp),%eax
08acf51d +0x0fd:  mov    0x4(%eax),%ecx
08acf520 +0x100:  mov    (%ecx,%edi,4),%eax
08acf523 +0x103:  mov    -0xc(%eax),%eax
08acf526 +0x106:  add    %eax,%ebx
08acf528 +0x108:  cmp    %ebx,0x10(%ebp)
08acf52b +0x10b:  jge    08acf4f0 <+0xd0>
08acf52d +0x10d:  mov    $0xffffffff,%eax
08acf532 +0x112:  add    $0x2c,%esp
08acf535 +0x115:  pop    %ebx
08acf536 +0x116:  pop    %esi
08acf537 +0x117:  pop    %edi
08acf538 +0x118:  pop    %ebp
08acf539 +0x119:  ret
08acf53a +0x11a:  lea    0x0(%esi),%esi
08acf540 +0x120:  mov    -0x20(%ebp),%ebx
08acf543 +0x123:  mov    %esi,%edx
08acf545 +0x125:  mov    %edx,%eax
08acf547 +0x127:  sub    %ebx,%eax
08acf549 +0x129:  jmp    08acf532 <+0x112>
08acf54b +0x12b:  nop
08acf54c +0x12c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// ScriptStringManager::exportToBuffer @ 0x8acf420

/* DWARF original prototype: int exportToBuffer(ScriptStringManager * this, uchar * buffer, int
   buffSize) */

int __thiscall
ScriptStringManager::exportToBuffer(ScriptStringManager *this,uchar *buffer,int buffSize)

{
  char *__src;
  int iVar1;
  int iVar2;
  int iVar3;
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar4;
  int local_28;
  int *local_24;
  
                    /* Unresolved local var: int write_size@[???]
                       Unresolved local var: uchar * ptr@[???]
                       Unresolved local var: uint string_count@[???]
                       Unresolved local var: uint offset@[???] */
  iVar1 = (int)(this->strings_).
               super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
               ._M_impl._M_finish -
          (int)(this->strings_).
               super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
               ._M_impl._M_start >> 2;
  *(int *)buffer = iVar1;
  iVar2 = -1;
  if (3 < buffSize) {
    local_24 = (int *)(buffer + 4);
                    /* Unresolved local var: int i@[???] */
    local_28 = 8;
    iVar2 = ((int)(this->strings_).
                  super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                  ._M_impl._M_finish -
             (int)(this->strings_).
                  super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                  ._M_impl._M_start >> 2) * 4 + 4;
    if (iVar1 < 1) {
LAB_08acf4b5:
      *local_24 = iVar2;
      iVar2 = -1;
      if (local_28 <= buffSize) {
                    /* Unresolved local var: int i@[???] */
        pbVar4 = (this->strings_).
                 super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                 ._M_impl._M_start;
        local_24 = local_24 + 1;
        if (3 < (int)(this->strings_).
                     super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                     ._M_impl._M_finish - (int)pbVar4) {
          iVar1 = 0;
          do {
            __src = pbVar4[iVar1]._M_dataplus._M_p;
            memcpy(local_24,__src,*(size_t *)(__src + -0xc));
            pbVar4 = (this->strings_).
                     super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                     ._M_impl._M_start;
            iVar2 = *(int *)(pbVar4[iVar1]._M_dataplus._M_p + -0xc);
            local_28 = local_28 + iVar2;
            if (buffSize < local_28) goto LAB_08acf52d;
            local_24 = (int *)((int)local_24 + iVar2);
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)(this->strings_).
                                super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                                ._M_impl._M_finish - (int)pbVar4 >> 2);
        }
        iVar2 = (int)local_24 - (int)buffer;
      }
    }
    else {
      *(int *)(buffer + 4) = iVar2;
      iVar3 = 0;
      local_28 = 8;
      if (7 < buffSize) {
        do {
          local_24 = (int *)(buffer + local_28);
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + *(int *)(*(int *)((int)&(this->strings_).
                                                  super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                                                  ._M_impl._M_start[-2]._M_dataplus._M_p + local_28)
                                  + -0xc);
          if (iVar1 <= iVar3) {
            local_28 = local_28 + 4;
            goto LAB_08acf4b5;
          }
          *(int *)(buffer + local_28) = iVar2;
          local_28 = local_28 + 4;
        } while (local_28 <= buffSize);
      }
LAB_08acf52d:
      iVar2 = -1;
    }
  }
  return iVar2;
}
```

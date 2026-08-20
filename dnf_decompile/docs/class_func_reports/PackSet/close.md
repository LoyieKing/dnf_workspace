# close

`_ZN7PackSet5closeEv`

`PackSet::close()`

| 类 | 地址 |
|---|---|
| `PackSet` | `0x08ac49da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac49da  _ZN7PackSet5closeEv
#           PackSet::close()
# range [0x08ac49da, 0x08ac4b65]
08ac49da +0x000:  push   %ebp
08ac49db +0x001:  mov    %esp,%ebp
08ac49dd +0x003:  sub    $0x38,%esp
08ac49e0 +0x006:  mov    0x8(%ebp),%eax
08ac49e3 +0x009:  mov    %eax,(%esp)
08ac49e6 +0x00c:  call   08ac7674 <_ZN7PackSet18UsingEncryptedFileEv>  ; PackSet::UsingEncryptedFile()
08ac49eb +0x011:  test   %al,%al
08ac49ed +0x013:  je     08ac49ff <+0x25>
08ac49ef +0x015:  mov    0x8(%ebp),%eax
08ac49f2 +0x018:  mov    %eax,(%esp)
08ac49f5 +0x01b:  call   08ac4b66 <_ZN7PackSet18closeEncryptedFileEv>  ; PackSet::closeEncryptedFile()
08ac49fa +0x020:  jmp    08ac4b63 <+0x189>
08ac49ff +0x025:  lea    -0x14(%ebp),%eax
08ac4a02 +0x028:  mov    %eax,(%esp)
08ac4a05 +0x02b:  call   08ac79dc <_ZN16IPackFileProcess15getCommonBufferEj+0x29e>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x29e
08ac4a0a +0x030:  mov    0x8(%ebp),%eax
08ac4a0d +0x033:  mov    (%eax),%eax
08ac4a0f +0x035:  test   %eax,%eax
08ac4a11 +0x037:  je     08ac4a20 <+0x46>
08ac4a13 +0x039:  mov    0x8(%ebp),%eax
08ac4a16 +0x03c:  mov    (%eax),%eax
08ac4a18 +0x03e:  mov    %eax,(%esp)
08ac4a1b +0x041:  call   0807dea0 <_init+0x798>
08ac4a20 +0x046:  mov    0x8(%ebp),%eax
08ac4a23 +0x049:  lea    0x10(%eax),%edx
08ac4a26 +0x04c:  lea    -0x1c(%ebp),%eax
08ac4a29 +0x04f:  mov    %edx,0x4(%esp)
08ac4a2d +0x053:  mov    %eax,(%esp)
08ac4a30 +0x056:  call   08ac79ea <_ZN16IPackFileProcess15getCommonBufferEj+0x2ac>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2ac
08ac4a35 +0x05b:  sub    $0x4,%esp
08ac4a38 +0x05e:  mov    -0x1c(%ebp),%eax
08ac4a3b +0x061:  mov    %eax,-0x14(%ebp)
08ac4a3e +0x064:  jmp    08ac4a8e <+0xb4>
08ac4a40 +0x066:  lea    -0x14(%ebp),%eax
08ac4a43 +0x069:  mov    %eax,(%esp)
08ac4a46 +0x06c:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac4a4b +0x071:  mov    0x1c(%eax),%eax
08ac4a4e +0x074:  test   %eax,%eax
08ac4a50 +0x076:  setne  %al
08ac4a53 +0x079:  test   %al,%al
08ac4a55 +0x07b:  je     08ac4a83 <+0xa9>
08ac4a57 +0x07d:  lea    -0x14(%ebp),%eax
08ac4a5a +0x080:  mov    %eax,(%esp)
08ac4a5d +0x083:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac4a62 +0x088:  mov    0x1c(%eax),%eax
08ac4a65 +0x08b:  test   %eax,%eax
08ac4a67 +0x08d:  je     08ac4a71 <+0x97>
08ac4a69 +0x08f:  mov    %eax,(%esp)
08ac4a6c +0x092:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ac4a71 +0x097:  lea    -0x14(%ebp),%eax
08ac4a74 +0x09a:  mov    %eax,(%esp)
08ac4a77 +0x09d:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac4a7c +0x0a2:  movl   $0x0,0x1c(%eax)
08ac4a83 +0x0a9:  lea    -0x14(%ebp),%eax
08ac4a86 +0x0ac:  mov    %eax,(%esp)
08ac4a89 +0x0af:  call   08ac7a0e <_ZN16IPackFileProcess15getCommonBufferEj+0x2d0>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2d0
08ac4a8e +0x0b4:  mov    0x8(%ebp),%eax
08ac4a91 +0x0b7:  lea    0x10(%eax),%edx
08ac4a94 +0x0ba:  lea    -0x10(%ebp),%eax
08ac4a97 +0x0bd:  mov    %edx,0x4(%esp)
08ac4a9b +0x0c1:  mov    %eax,(%esp)
08ac4a9e +0x0c4:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac4aa3 +0x0c9:  sub    $0x4,%esp
08ac4aa6 +0x0cc:  lea    -0x10(%ebp),%eax
08ac4aa9 +0x0cf:  mov    %eax,0x4(%esp)
08ac4aad +0x0d3:  lea    -0x14(%ebp),%eax
08ac4ab0 +0x0d6:  mov    %eax,(%esp)
08ac4ab3 +0x0d9:  call   08ac79b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x272>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x272
08ac4ab8 +0x0de:  test   %al,%al
08ac4aba +0x0e0:  jne    08ac4a40 <+0x66>
08ac4abc +0x0e2:  mov    0x8(%ebp),%eax
08ac4abf +0x0e5:  lea    0x1c(%eax),%edx
08ac4ac2 +0x0e8:  lea    -0x1c(%ebp),%eax
08ac4ac5 +0x0eb:  mov    %edx,0x4(%esp)
08ac4ac9 +0x0ef:  mov    %eax,(%esp)
08ac4acc +0x0f2:  call   08ac79ea <_ZN16IPackFileProcess15getCommonBufferEj+0x2ac>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2ac
08ac4ad1 +0x0f7:  sub    $0x4,%esp
08ac4ad4 +0x0fa:  mov    -0x1c(%ebp),%eax
08ac4ad7 +0x0fd:  mov    %eax,-0x14(%ebp)
08ac4ada +0x100:  jmp    08ac4b2a <+0x150>
08ac4adc +0x102:  lea    -0x14(%ebp),%eax
08ac4adf +0x105:  mov    %eax,(%esp)
08ac4ae2 +0x108:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac4ae7 +0x10d:  mov    0x1c(%eax),%eax
08ac4aea +0x110:  test   %eax,%eax
08ac4aec +0x112:  setne  %al
08ac4aef +0x115:  test   %al,%al
08ac4af1 +0x117:  je     08ac4b1f <+0x145>
08ac4af3 +0x119:  lea    -0x14(%ebp),%eax
08ac4af6 +0x11c:  mov    %eax,(%esp)
08ac4af9 +0x11f:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac4afe +0x124:  mov    0x1c(%eax),%eax
08ac4b01 +0x127:  test   %eax,%eax
08ac4b03 +0x129:  je     08ac4b0d <+0x133>
08ac4b05 +0x12b:  mov    %eax,(%esp)
08ac4b08 +0x12e:  call   08724bb0 <_ZdaPv>  ; operator delete[](void*)
08ac4b0d +0x133:  lea    -0x14(%ebp),%eax
08ac4b10 +0x136:  mov    %eax,(%esp)
08ac4b13 +0x139:  call   08ac7a24 <_ZN16IPackFileProcess15getCommonBufferEj+0x2e6>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2e6
08ac4b18 +0x13e:  movl   $0x0,0x1c(%eax)
08ac4b1f +0x145:  lea    -0x14(%ebp),%eax
08ac4b22 +0x148:  mov    %eax,(%esp)
08ac4b25 +0x14b:  call   08ac7a0e <_ZN16IPackFileProcess15getCommonBufferEj+0x2d0>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x2d0
08ac4b2a +0x150:  mov    0x8(%ebp),%eax
08ac4b2d +0x153:  lea    0x1c(%eax),%edx
08ac4b30 +0x156:  lea    -0xc(%ebp),%eax
08ac4b33 +0x159:  mov    %edx,0x4(%esp)
08ac4b37 +0x15d:  mov    %eax,(%esp)
08ac4b3a +0x160:  call   08ac798a <_ZN16IPackFileProcess15getCommonBufferEj+0x24c>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x24c
08ac4b3f +0x165:  sub    $0x4,%esp
08ac4b42 +0x168:  lea    -0xc(%ebp),%eax
08ac4b45 +0x16b:  mov    %eax,0x4(%esp)
08ac4b49 +0x16f:  lea    -0x14(%ebp),%eax
08ac4b4c +0x172:  mov    %eax,(%esp)
08ac4b4f +0x175:  call   08ac79b0 <_ZN16IPackFileProcess15getCommonBufferEj+0x272>  ; IPackFileProcess::getCommonBuffer(unsigned int)+0x272
08ac4b54 +0x17a:  test   %al,%al
08ac4b56 +0x17c:  jne    08ac4adc <+0x102>
08ac4b58 +0x17e:  mov    0x8(%ebp),%eax
08ac4b5b +0x181:  mov    %eax,(%esp)
08ac4b5e +0x184:  call   08ac48d2 <_ZN7PackSet5clearEv>  ; PackSet::clear()
08ac4b63 +0x189:  leave
08ac4b64 +0x18a:  ret
08ac4b65 +0x18b:  nop
```

## 反编译 C

```c
// PackSet::close @ 0x8ac49da

/* DWARF original prototype: void close(PackSet * this) */

void __thiscall PackSet::close(PackSet *this)

{
  uchar *puVar1;
  bool bVar2;
  pair<long_unsigned_int,_IndexEntry> *ppVar3;
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  local_20;
  undefined1 local_14 [16];
  
                    /* Unresolved local var: index_vector_it it@[???] */
  bVar2 = UsingEncryptedFile(this);
  if (bVar2) {
    closeEncryptedFile(this);
  }
  else {
    __gnu_cxx::
    __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
    ::__normal_iterator((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                         *)&local_20.
                            super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                            ._M_impl._M_end_of_storage);
    if (this->pack_file_ != (FILE *)0x0) {
      fclose((FILE *)this->pack_file_);
    }
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::begin(&local_20);
    local_20.
    super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ._M_impl._M_end_of_storage =
         local_20.
         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
         ._M_impl._M_start;
    while( true ) {
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
             *)local_14);
      bVar2 = __gnu_cxx::
              operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                        ((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          *)&local_20.
                             super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                             ._M_impl._M_end_of_storage,
                         (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          *)local_14);
      if (!bVar2) break;
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                             *)&local_20.
                                super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                ._M_impl._M_end_of_storage);
      if ((ppVar3->second).content_ != (uchar *)0x0) {
        ppVar3 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                               *)&local_20.
                                  super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                  ._M_impl._M_end_of_storage);
        puVar1 = (ppVar3->second).content_;
        if (puVar1 != (uchar *)0x0) {
          operator_delete__(puVar1);
        }
        ppVar3 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                               *)&local_20.
                                  super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                  ._M_impl._M_end_of_storage);
        (ppVar3->second).content_ = (uchar *)0x0;
      }
      __gnu_cxx::
      __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
      ::operator++((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                    *)&local_20.
                       super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                       ._M_impl._M_end_of_storage);
    }
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::begin(&local_20);
    local_20.
    super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ._M_impl._M_end_of_storage =
         local_20.
         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
         ._M_impl._M_start;
    while( true ) {
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
             *)(local_14 + 4));
      bVar2 = __gnu_cxx::
              operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                        ((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          *)&local_20.
                             super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                             ._M_impl._M_end_of_storage,
                         (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          *)(local_14 + 4));
      if (!bVar2) break;
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                             *)&local_20.
                                super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                ._M_impl._M_end_of_storage);
      if ((ppVar3->second).content_ != (uchar *)0x0) {
        ppVar3 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                               *)&local_20.
                                  super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                  ._M_impl._M_end_of_storage);
        puVar1 = (ppVar3->second).content_;
        if (puVar1 != (uchar *)0x0) {
          operator_delete__(puVar1);
        }
        ppVar3 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                               *)&local_20.
                                  super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                  ._M_impl._M_end_of_storage);
        (ppVar3->second).content_ = (uchar *)0x0;
      }
      __gnu_cxx::
      __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
      ::operator++((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                    *)&local_20.
                       super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                       ._M_impl._M_end_of_storage);
    }
    clear(this);
  }
  return;
}
```

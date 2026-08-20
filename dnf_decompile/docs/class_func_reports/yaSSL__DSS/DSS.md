# DSS

`_ZN5yaSSL3DSSC1EPKhjb`

`yaSSL::DSS::DSS(unsigned char const*, unsigned int, bool)`

| 类 | 地址 |
|---|---|
| `yaSSL::DSS` | `0x0879b560` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0879b560  _ZN5yaSSL3DSSC1EPKhjb
#           yaSSL::DSS::DSS(unsigned char const*, unsigned int, bool)
# range [0x0879b560, 0x0879b669]
0879b560 +0x000:  push   %ebp
0879b561 +0x001:  mov    %esp,%ebp
0879b563 +0x003:  push   %edi
0879b564 +0x004:  push   %esi
0879b565 +0x005:  push   %ebx
0879b566 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
0879b56b +0x00b:  add    $0xbd162d,%ebx
0879b571 +0x011:  sub    $0x2c,%esp
0879b574 +0x014:  mov    0x8(%ebp),%esi
0879b577 +0x017:  mov    0x10(%ebp),%edi
0879b57a +0x01a:  movzbl 0x14(%ebp),%edx
0879b57e +0x01e:  mov    -0x2e8(%ebx),%eax
0879b584 +0x024:  add    $0x8,%eax
0879b587 +0x027:  mov    %eax,(%esi)
0879b589 +0x029:  mov    %dl,-0x20(%ebp)
0879b58c +0x02c:  movb   $0x0,0x4(%esp)
0879b591 +0x031:  movl   $0x90,(%esp)
0879b598 +0x038:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
0879b59d +0x03d:  mov    %eax,-0x1c(%ebp)
0879b5a0 +0x040:  mov    %eax,(%esp)
0879b5a3 +0x043:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879b5a8 +0x048:  mov    -0x1c(%ebp),%eax
0879b5ab +0x04b:  add    $0x10,%eax
0879b5ae +0x04e:  mov    %eax,(%esp)
0879b5b1 +0x051:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879b5b6 +0x056:  mov    -0x1c(%ebp),%eax
0879b5b9 +0x059:  add    $0x20,%eax
0879b5bc +0x05c:  mov    %eax,(%esp)
0879b5bf +0x05f:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879b5c4 +0x064:  mov    -0x1c(%ebp),%eax
0879b5c7 +0x067:  add    $0x30,%eax
0879b5ca +0x06a:  mov    %eax,(%esp)
0879b5cd +0x06d:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879b5d2 +0x072:  mov    -0x1c(%ebp),%eax
0879b5d5 +0x075:  add    $0x40,%eax
0879b5d8 +0x078:  mov    %eax,(%esp)
0879b5db +0x07b:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879b5e0 +0x080:  mov    -0x1c(%ebp),%eax
0879b5e3 +0x083:  add    $0x50,%eax
0879b5e6 +0x086:  mov    %eax,(%esp)
0879b5e9 +0x089:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879b5ee +0x08e:  mov    -0x1c(%ebp),%eax
0879b5f1 +0x091:  add    $0x60,%eax
0879b5f4 +0x094:  mov    %eax,(%esp)
0879b5f7 +0x097:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879b5fc +0x09c:  mov    -0x1c(%ebp),%eax
0879b5ff +0x09f:  add    $0x70,%eax
0879b602 +0x0a2:  mov    %eax,(%esp)
0879b605 +0x0a5:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879b60a +0x0aa:  mov    -0x1c(%ebp),%eax
0879b60d +0x0ad:  sub    $0xffffff80,%eax
0879b610 +0x0b0:  mov    %eax,(%esp)
0879b613 +0x0b3:  call   0875f590 <_ZN8TaoCrypt7IntegerC1Ev>  ; TaoCrypt::Integer::Integer()
0879b618 +0x0b8:  movzbl -0x20(%ebp),%edx
0879b61c +0x0bc:  mov    -0x1c(%ebp),%eax
0879b61f +0x0bf:  test   %dl,%dl
0879b621 +0x0c1:  mov    %eax,0x4(%esi)
0879b624 +0x0c4:  jne    0879b648 <+0xe8>
0879b626 +0x0c6:  mov    0xc(%ebp),%eax
0879b629 +0x0c9:  mov    %edi,0x8(%esp)
0879b62d +0x0cd:  mov    %eax,0x4(%esp)
0879b631 +0x0d1:  mov    -0x1c(%ebp),%eax
0879b634 +0x0d4:  mov    %eax,(%esp)
0879b637 +0x0d7:  call   0879b400 <_ZN5yaSSL3DSS7DSSImpl10SetPrivateEPKhj>  ; yaSSL::DSS::DSSImpl::SetPrivate(unsigned char const*, unsigned int)
0879b63c +0x0dc:  add    $0x2c,%esp
0879b63f +0x0df:  pop    %ebx
0879b640 +0x0e0:  pop    %esi
0879b641 +0x0e1:  pop    %edi
0879b642 +0x0e2:  pop    %ebp
0879b643 +0x0e3:  ret
0879b644 +0x0e4:  lea    0x0(%esi,%eiz,1),%esi
0879b648 +0x0e8:  mov    0xc(%ebp),%eax
0879b64b +0x0eb:  mov    %edi,0x8(%esp)
0879b64f +0x0ef:  mov    %eax,0x4(%esp)
0879b653 +0x0f3:  mov    -0x1c(%ebp),%eax
0879b656 +0x0f6:  mov    %eax,(%esp)
0879b659 +0x0f9:  call   0879a4b0 <_ZN5yaSSL3DSS7DSSImpl9SetPublicEPKhj>  ; yaSSL::DSS::DSSImpl::SetPublic(unsigned char const*, unsigned int)
0879b65e +0x0fe:  add    $0x2c,%esp
0879b661 +0x101:  pop    %ebx
0879b662 +0x102:  pop    %esi
0879b663 +0x103:  pop    %edi
0879b664 +0x104:  pop    %ebp
0879b665 +0x105:  ret
0879b666 +0x106:  lea    0x0(%esi),%esi
0879b669 +0x109:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::DSS::DSS @ 0x879b560

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DSS::DSS(unsigned char const*, unsigned int, bool) */

void __thiscall yaSSL::DSS::DSS(DSS *this,uchar *param_1,uint param_2,bool param_3)

{
  Integer *this_00;
  uint in_stack_ffffffc8;
  
  *(undefined **)this = PTR_vtable_0936c8b0 + 8;
  this_00 = operator_new(0x90,in_stack_ffffffc8 & 0xffffff00);
  TaoCrypt::Integer::Integer(this_00);
  TaoCrypt::Integer::Integer(this_00 + 0x10);
  TaoCrypt::Integer::Integer(this_00 + 0x20);
  TaoCrypt::Integer::Integer(this_00 + 0x30);
  TaoCrypt::Integer::Integer(this_00 + 0x40);
  TaoCrypt::Integer::Integer(this_00 + 0x50);
  TaoCrypt::Integer::Integer(this_00 + 0x60);
  TaoCrypt::Integer::Integer(this_00 + 0x70);
  TaoCrypt::Integer::Integer(this_00 + 0x80);
  *(Integer **)(this + 4) = this_00;
  if (!param_3) {
    DSSImpl::SetPrivate((DSSImpl *)this_00,param_1,param_2);
    return;
  }
  DSSImpl::SetPublic((DSSImpl *)this_00,param_1,param_2);
  return;
}
```

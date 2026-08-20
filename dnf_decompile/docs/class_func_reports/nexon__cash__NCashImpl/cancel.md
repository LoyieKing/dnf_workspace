# cancel

`_ZN5nexon4cash9NCashImpl6cancelEhj`

`nexon::cash::NCashImpl::cancel(unsigned char, unsigned int)`

| 类 | 地址 |
|---|---|
| `nexon::cash::NCashImpl` | `0x081add04` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081add04  _ZN5nexon4cash9NCashImpl6cancelEhj
#           nexon::cash::NCashImpl::cancel(unsigned char, unsigned int)
# range [0x081add04, 0x081ade33]
081add04 +0x000:  push   %ebp
081add05 +0x001:  mov    %esp,%ebp
081add07 +0x003:  sub    $0x68,%esp
081add0a +0x006:  mov    0xc(%ebp),%eax
081add0d +0x009:  mov    %al,-0x3c(%ebp)
081add10 +0x00c:  cmpl   $0x0,0x10(%ebp)
081add14 +0x010:  jne    081add20 <+0x1c>
081add16 +0x012:  mov    $0x0,%eax
081add1b +0x017:  jmp    081ade31 <+0x12d>
081add20 +0x01c:  mov    0x8(%ebp),%eax
081add23 +0x01f:  mov    %eax,(%esp)
081add26 +0x022:  call   081ad080 <_ZN5nexon4cash9NCashImpl9reconnectEv>  ; nexon::cash::NCashImpl::reconnect()
081add2b +0x027:  xor    $0x1,%eax
081add2e +0x02a:  test   %al,%al
081add30 +0x02c:  je     081add3c <+0x38>
081add32 +0x02e:  mov    $0x2,%eax
081add37 +0x033:  jmp    081ade31 <+0x12d>
081add3c +0x038:  lea    -0x1c(%ebp),%eax
081add3f +0x03b:  movl   $0x4,0xc(%esp)
081add47 +0x043:  movl   $0x0,0x8(%esp)
081add4f +0x04b:  mov    0x8(%ebp),%edx
081add52 +0x04e:  mov    %edx,0x4(%esp)
081add56 +0x052:  mov    %eax,(%esp)
081add59 +0x055:  call   081ad0e6 <_ZN5nexon4cash9NCashImpl15set_data_headerEhh>  ; nexon::cash::NCashImpl::set_data_header(unsigned char, unsigned char)
081add5e +0x05a:  sub    $0x4,%esp
081add61 +0x05d:  movzbl -0x3c(%ebp),%eax
081add65 +0x061:  mov    %eax,0x4(%esp)
081add69 +0x065:  lea    -0x1c(%ebp),%eax
081add6c +0x068:  mov    %eax,(%esp)
081add6f +0x06b:  call   081ae614 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x103>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x103
081add74 +0x070:  mov    0x10(%ebp),%eax
081add77 +0x073:  mov    %eax,0x4(%esp)
081add7b +0x077:  lea    -0x1c(%ebp),%eax
081add7e +0x07a:  mov    %eax,(%esp)
081add81 +0x07d:  call   081ae74c <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x23b>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x23b
081add86 +0x082:  movl   $0x0,-0xc(%ebp)
081add8d +0x089:  lea    -0x1c(%ebp),%eax
081add90 +0x08c:  mov    %eax,(%esp)
081add93 +0x08f:  call   081acf60 <_GLOBAL__I__ZN5nexon4cash10ByteBufferlsEPKc+0x83>  ; global constructors keyed to nexon::cash::ByteBuffer::operator<<(char const*)+0x83
081add98 +0x094:  mov    %eax,0x4(%esp)
081add9c +0x098:  mov    0x8(%ebp),%eax
081add9f +0x09b:  mov    %eax,(%esp)
081adda2 +0x09e:  call   081aec2c <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x71b>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x71b
081adda7 +0x0a3:  mov    %eax,-0xc(%ebp)
081addaa +0x0a6:  cmpl   $0x0,-0xc(%ebp)
081addae +0x0aa:  je     081addb5 <+0xb1>
081addb0 +0x0ac:  mov    -0xc(%ebp),%eax
081addb3 +0x0af:  jmp    081ade31 <+0x12d>
081addb5 +0x0b1:  mov    0x8(%ebp),%eax
081addb8 +0x0b4:  mov    %eax,(%esp)
081addbb +0x0b7:  call   081aea46 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x535>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x535
081addc0 +0x0bc:  mov    %eax,-0xc(%ebp)
081addc3 +0x0bf:  cmpl   $0x0,-0xc(%ebp)
081addc7 +0x0c3:  je     081addce <+0xca>
081addc9 +0x0c5:  mov    -0xc(%ebp),%eax
081addcc +0x0c8:  jmp    081ade31 <+0x12d>
081addce +0x0ca:  lea    -0x34(%ebp),%eax
081addd1 +0x0cd:  lea    -0x24(%ebp),%edx
081addd4 +0x0d0:  mov    %edx,0x10(%esp)
081addd8 +0x0d4:  lea    -0x1e(%ebp),%edx
081adddb +0x0d7:  mov    %edx,0xc(%esp)
081adddf +0x0db:  lea    -0x1d(%ebp),%edx
081adde2 +0x0de:  mov    %edx,0x8(%esp)
081adde6 +0x0e2:  mov    0x8(%ebp),%edx
081adde9 +0x0e5:  mov    %edx,0x4(%esp)
081added +0x0e9:  mov    %eax,(%esp)
081addf0 +0x0ec:  call   081ad168 <_ZN5nexon4cash9NCashImpl15get_data_headerERhS2_Rj>  ; nexon::cash::NCashImpl::get_data_header(unsigned char&, unsigned char&, unsigned int&)
081addf5 +0x0f1:  sub    $0x4,%esp
081addf8 +0x0f4:  movzbl -0x1e(%ebp),%eax
081addfc +0x0f8:  cmp    $0x3,%al
081addfe +0x0fa:  je     081ade18 <+0x114>
081ade00 +0x0fc:  movzbl -0x1e(%ebp),%eax
081ade04 +0x100:  movzbl %al,%eax
081ade07 +0x103:  mov    %eax,0x4(%esp)
081ade0b +0x107:  mov    0x8(%ebp),%eax
081ade0e +0x10a:  mov    %eax,(%esp)
081ade11 +0x10d:  call   081ad1e0 <_ZN5nexon4cash9NCashImpl17handle_cash_errorEi>  ; nexon::cash::NCashImpl::handle_cash_error(int)
081ade16 +0x112:  jmp    081ade31 <+0x12d>
081ade18 +0x114:  movl   $&_ZZN5nexon4cash9NCashImpl6cancelEhjE12__FUNCTION__,0x4(%esp)
081ade20 +0x11c:  movl   $"[%s] E_PURCHASE_CONFIRM\n",(%esp)
081ade27 +0x123:  call   0807db60 <_init+0x458>
081ade2c +0x128:  mov    $0x0,%eax
081ade31 +0x12d:  leave
081ade32 +0x12e:  ret
081ade33 +0x12f:  nop
```

## 反编译 C

```c
// nexon::cash::NCashImpl::cancel @ 0x81add04

/* nexon::cash::NCashImpl::cancel(unsigned char, unsigned int) */

int __thiscall nexon::cash::NCashImpl::cancel(NCashImpl *this,uchar param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  uchar local_38 [16];
  undefined1 local_28 [6];
  byte local_22;
  undefined4 local_21;
  int local_10;
  
  if (param_2 == 0) {
    local_10 = 0;
  }
  else {
    cVar1 = reconnect(this);
    if (cVar1 == '\x01') {
      set_data_header((char)&local_21 + '\x01',(uchar)this);
      ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),param_1);
      ByteBuffer::operator<<((ByteBuffer *)((int)&local_21 + 1),param_2);
      local_10 = 0;
      uVar2 = ByteBuffer::length((ByteBuffer *)((int)&local_21 + 1));
      local_10 = send_msg(this,uVar2);
      if ((local_10 == 0) && (local_10 = recv_msg(this), local_10 == 0)) {
        puVar5 = local_28;
        pbVar4 = &local_22;
        puVar3 = &local_21;
        get_data_header(local_38,(uchar *)this,puVar3);
        if (local_22 == 3) {
          printf("[%s] E_PURCHASE_CONFIRM\n","cancel",puVar3,pbVar4,puVar5);
          local_10 = 0;
        }
        else {
          local_10 = handle_cash_error(this,(uint)local_22);
        }
      }
    }
    else {
      local_10 = 2;
    }
  }
  return local_10;
}
```

# confirm

`_ZN5nexon4cash9NCashImpl7confirmEhj`

`nexon::cash::NCashImpl::confirm(unsigned char, unsigned int)`

| 类 | 地址 |
|---|---|
| `nexon::cash::NCashImpl` | `0x081adbd4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081adbd4  _ZN5nexon4cash9NCashImpl7confirmEhj
#           nexon::cash::NCashImpl::confirm(unsigned char, unsigned int)
# range [0x081adbd4, 0x081add03]
081adbd4 +0x000:  push   %ebp
081adbd5 +0x001:  mov    %esp,%ebp
081adbd7 +0x003:  sub    $0x68,%esp
081adbda +0x006:  mov    0xc(%ebp),%eax
081adbdd +0x009:  mov    %al,-0x3c(%ebp)
081adbe0 +0x00c:  cmpl   $0x0,0x10(%ebp)
081adbe4 +0x010:  jne    081adbf0 <+0x1c>
081adbe6 +0x012:  mov    $0x0,%eax
081adbeb +0x017:  jmp    081add01 <+0x12d>
081adbf0 +0x01c:  mov    0x8(%ebp),%eax
081adbf3 +0x01f:  mov    %eax,(%esp)
081adbf6 +0x022:  call   081ad080 <_ZN5nexon4cash9NCashImpl9reconnectEv>  ; nexon::cash::NCashImpl::reconnect()
081adbfb +0x027:  xor    $0x1,%eax
081adbfe +0x02a:  test   %al,%al
081adc00 +0x02c:  je     081adc0c <+0x38>
081adc02 +0x02e:  mov    $0x2,%eax
081adc07 +0x033:  jmp    081add01 <+0x12d>
081adc0c +0x038:  lea    -0x1c(%ebp),%eax
081adc0f +0x03b:  movl   $0x3,0xc(%esp)
081adc17 +0x043:  movl   $0x0,0x8(%esp)
081adc1f +0x04b:  mov    0x8(%ebp),%edx
081adc22 +0x04e:  mov    %edx,0x4(%esp)
081adc26 +0x052:  mov    %eax,(%esp)
081adc29 +0x055:  call   081ad0e6 <_ZN5nexon4cash9NCashImpl15set_data_headerEhh>  ; nexon::cash::NCashImpl::set_data_header(unsigned char, unsigned char)
081adc2e +0x05a:  sub    $0x4,%esp
081adc31 +0x05d:  movzbl -0x3c(%ebp),%eax
081adc35 +0x061:  mov    %eax,0x4(%esp)
081adc39 +0x065:  lea    -0x1c(%ebp),%eax
081adc3c +0x068:  mov    %eax,(%esp)
081adc3f +0x06b:  call   081ae614 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x103>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x103
081adc44 +0x070:  mov    0x10(%ebp),%eax
081adc47 +0x073:  mov    %eax,0x4(%esp)
081adc4b +0x077:  lea    -0x1c(%ebp),%eax
081adc4e +0x07a:  mov    %eax,(%esp)
081adc51 +0x07d:  call   081ae74c <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x23b>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x23b
081adc56 +0x082:  movl   $0x0,-0xc(%ebp)
081adc5d +0x089:  lea    -0x1c(%ebp),%eax
081adc60 +0x08c:  mov    %eax,(%esp)
081adc63 +0x08f:  call   081acf60 <_GLOBAL__I__ZN5nexon4cash10ByteBufferlsEPKc+0x83>  ; global constructors keyed to nexon::cash::ByteBuffer::operator<<(char const*)+0x83
081adc68 +0x094:  mov    %eax,0x4(%esp)
081adc6c +0x098:  mov    0x8(%ebp),%eax
081adc6f +0x09b:  mov    %eax,(%esp)
081adc72 +0x09e:  call   081aec2c <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x71b>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x71b
081adc77 +0x0a3:  mov    %eax,-0xc(%ebp)
081adc7a +0x0a6:  cmpl   $0x0,-0xc(%ebp)
081adc7e +0x0aa:  je     081adc85 <+0xb1>
081adc80 +0x0ac:  mov    -0xc(%ebp),%eax
081adc83 +0x0af:  jmp    081add01 <+0x12d>
081adc85 +0x0b1:  mov    0x8(%ebp),%eax
081adc88 +0x0b4:  mov    %eax,(%esp)
081adc8b +0x0b7:  call   081aea46 <_GLOBAL__I__ZN5nexon4cash9NCashImplC2EPKcshts+0x535>  ; global constructors keyed to nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)+0x535
081adc90 +0x0bc:  mov    %eax,-0xc(%ebp)
081adc93 +0x0bf:  cmpl   $0x0,-0xc(%ebp)
081adc97 +0x0c3:  je     081adc9e <+0xca>
081adc99 +0x0c5:  mov    -0xc(%ebp),%eax
081adc9c +0x0c8:  jmp    081add01 <+0x12d>
081adc9e +0x0ca:  lea    -0x34(%ebp),%eax
081adca1 +0x0cd:  lea    -0x24(%ebp),%edx
081adca4 +0x0d0:  mov    %edx,0x10(%esp)
081adca8 +0x0d4:  lea    -0x1e(%ebp),%edx
081adcab +0x0d7:  mov    %edx,0xc(%esp)
081adcaf +0x0db:  lea    -0x1d(%ebp),%edx
081adcb2 +0x0de:  mov    %edx,0x8(%esp)
081adcb6 +0x0e2:  mov    0x8(%ebp),%edx
081adcb9 +0x0e5:  mov    %edx,0x4(%esp)
081adcbd +0x0e9:  mov    %eax,(%esp)
081adcc0 +0x0ec:  call   081ad168 <_ZN5nexon4cash9NCashImpl15get_data_headerERhS2_Rj>  ; nexon::cash::NCashImpl::get_data_header(unsigned char&, unsigned char&, unsigned int&)
081adcc5 +0x0f1:  sub    $0x4,%esp
081adcc8 +0x0f4:  movzbl -0x1e(%ebp),%eax
081adccc +0x0f8:  cmp    $0x3,%al
081adcce +0x0fa:  je     081adce8 <+0x114>
081adcd0 +0x0fc:  movzbl -0x1e(%ebp),%eax
081adcd4 +0x100:  movzbl %al,%eax
081adcd7 +0x103:  mov    %eax,0x4(%esp)
081adcdb +0x107:  mov    0x8(%ebp),%eax
081adcde +0x10a:  mov    %eax,(%esp)
081adce1 +0x10d:  call   081ad1e0 <_ZN5nexon4cash9NCashImpl17handle_cash_errorEi>  ; nexon::cash::NCashImpl::handle_cash_error(int)
081adce6 +0x112:  jmp    081add01 <+0x12d>
081adce8 +0x114:  movl   $&_ZZN5nexon4cash9NCashImpl7confirmEhjE12__FUNCTION__,0x4(%esp)
081adcf0 +0x11c:  movl   $"[%s] E_PURCHASE_CONFIRM\n",(%esp)
081adcf7 +0x123:  call   0807db60 <_init+0x458>
081adcfc +0x128:  mov    $0x0,%eax
081add01 +0x12d:  leave
081add02 +0x12e:  ret
081add03 +0x12f:  nop
```

## 反编译 C

```c
// nexon::cash::NCashImpl::confirm @ 0x81adbd4

/* nexon::cash::NCashImpl::confirm(unsigned char, unsigned int) */

int __thiscall nexon::cash::NCashImpl::confirm(NCashImpl *this,uchar param_1,uint param_2)

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
          printf("[%s] E_PURCHASE_CONFIRM\n","confirm",puVar3,pbVar4,puVar5);
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

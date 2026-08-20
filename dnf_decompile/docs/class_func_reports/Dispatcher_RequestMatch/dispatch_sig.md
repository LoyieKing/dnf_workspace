# dispatch_sig

`_ZN23Dispatcher_RequestMatch12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_RequestMatch::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_RequestMatch` | `0x08217ad0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08217ad0  _ZN23Dispatcher_RequestMatch12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_RequestMatch::dispatch_sig(CUser*, PacketBuf&)
# range [0x08217ad0, 0x08217bd5]
08217ad0 +0x000:  push   %ebp
08217ad1 +0x001:  mov    %esp,%ebp
08217ad3 +0x003:  sub    $0x28,%esp
08217ad6 +0x006:  mov    0xc(%ebp),%eax
08217ad9 +0x009:  mov    %eax,(%esp)
08217adc +0x00c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08217ae1 +0x011:  cmp    $0x2,%eax
08217ae4 +0x014:  setle  %al
08217ae7 +0x017:  test   %al,%al
08217ae9 +0x019:  je     08217af5 <+0x25>
08217aeb +0x01b:  mov    $0x0,%eax
08217af0 +0x020:  jmp    08217bd4 <+0x104>
08217af5 +0x025:  mov    0xc(%ebp),%eax
08217af8 +0x028:  mov    %eax,(%esp)
08217afb +0x02b:  call   0865518e <_ZN5CUser10GetPVPRoomEv>  ; CUser::GetPVPRoom()
08217b00 +0x030:  mov    %eax,-0xc(%ebp)
08217b03 +0x033:  cmpl   $0x0,-0xc(%ebp)
08217b07 +0x037:  jne    08217b13 <+0x43>
08217b09 +0x039:  mov    $0x0,%eax
08217b0e +0x03e:  jmp    08217bd4 <+0x104>
08217b13 +0x043:  mov    -0xc(%ebp),%eax
08217b16 +0x046:  mov    0x6e4(%eax),%eax
08217b1c +0x04c:  test   %eax,%eax
08217b1e +0x04e:  jne    08217b2a <+0x5a>
08217b20 +0x050:  mov    $0x0,%eax
08217b25 +0x055:  jmp    08217bd4 <+0x104>
08217b2a +0x05a:  movb   $0x0,-0xd(%ebp)
08217b2e +0x05e:  lea    -0xd(%ebp),%eax
08217b31 +0x061:  mov    %eax,0x4(%esp)
08217b35 +0x065:  mov    0x10(%ebp),%eax
08217b38 +0x068:  mov    %eax,(%esp)
08217b3b +0x06b:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08217b40 +0x070:  xor    $0x1,%eax
08217b43 +0x073:  test   %al,%al
08217b45 +0x075:  je     08217b6d <+0x9d>
08217b47 +0x077:  movl   $0x0,0xc(%esp)
08217b4f +0x07f:  movl   $0x0,0x8(%esp)
08217b57 +0x087:  movl   $&_ZZN23Dispatcher_RequestMatch12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08217b5f +0x08f:  movl   $0xc9c4,(%esp)
08217b66 +0x096:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08217b6b +0x09b:  jmp    08217bd4 <+0x104>
08217b6d +0x09d:  movzbl -0xd(%ebp),%eax
08217b71 +0x0a1:  test   %al,%al
08217b73 +0x0a3:  je     08217ba3 <+0xd3>
08217b75 +0x0a5:  mov    -0xc(%ebp),%eax
08217b78 +0x0a8:  mov    0x6e4(%eax),%eax
08217b7e +0x0ae:  mov    (%eax),%eax
08217b80 +0x0b0:  add    $0x34,%eax
08217b83 +0x0b3:  mov    (%eax),%ecx
08217b85 +0x0b5:  mov    -0xc(%ebp),%eax
08217b88 +0x0b8:  mov    0x6e4(%eax),%eax
08217b8e +0x0be:  mov    -0xc(%ebp),%edx
08217b91 +0x0c1:  mov    %edx,0x8(%esp)
08217b95 +0x0c5:  mov    0xc(%ebp),%edx
08217b98 +0x0c8:  mov    %edx,0x4(%esp)
08217b9c +0x0cc:  mov    %eax,(%esp)
08217b9f +0x0cf:  call   *%ecx
08217ba1 +0x0d1:  jmp    08217bcf <+0xff>
08217ba3 +0x0d3:  mov    -0xc(%ebp),%eax
08217ba6 +0x0d6:  mov    0x6e4(%eax),%eax
08217bac +0x0dc:  mov    (%eax),%eax
08217bae +0x0de:  add    $0x30,%eax
08217bb1 +0x0e1:  mov    (%eax),%ecx
08217bb3 +0x0e3:  mov    -0xc(%ebp),%eax
08217bb6 +0x0e6:  mov    0x6e4(%eax),%eax
08217bbc +0x0ec:  mov    -0xc(%ebp),%edx
08217bbf +0x0ef:  mov    %edx,0x8(%esp)
08217bc3 +0x0f3:  mov    0xc(%ebp),%edx
08217bc6 +0x0f6:  mov    %edx,0x4(%esp)
08217bca +0x0fa:  mov    %eax,(%esp)
08217bcd +0x0fd:  call   *%ecx
08217bcf +0x0ff:  mov    $0x0,%eax
08217bd4 +0x104:  leave
08217bd5 +0x105:  ret
```

## 反编译 C

```c
// Dispatcher_RequestMatch::dispatch_sig @ 0x8217ad0

/* Dispatcher_RequestMatch::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_RequestMatch::dispatch_sig
          (Dispatcher_RequestMatch *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uchar local_11;
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    local_10 = CUser::GetPVPRoom(param_1);
    if (local_10 == 0) {
      uVar3 = 0;
    }
    else if (*(int *)(local_10 + 0x6e4) == 0) {
      uVar3 = 0;
    }
    else {
      local_11 = '\0';
      cVar1 = PacketBuf::get_byte(param_2,&local_11);
      if (cVar1 == '\x01') {
        if (local_11 == '\0') {
          (**(code **)(**(int **)(local_10 + 0x6e4) + 0x30))
                    (*(undefined4 *)(local_10 + 0x6e4),param_1,local_10);
        }
        else {
          (**(code **)(**(int **)(local_10 + 0x6e4) + 0x34))
                    (*(undefined4 *)(local_10 + 0x6e4),param_1,local_10);
        }
        uVar3 = 0;
      }
      else {
        uVar3 = LineFunc(0xc9c4,
                         "virtual int Dispatcher_RequestMatch::dispatch_sig(CUser*, PacketBuf&)",0,0
                        );
      }
    }
  }
  return uVar3;
}
```

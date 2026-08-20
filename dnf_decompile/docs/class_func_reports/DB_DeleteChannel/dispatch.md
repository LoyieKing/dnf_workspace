# dispatch

`_ZN16DB_DeleteChannel8dispatchEiiP6Stream`

`DB_DeleteChannel::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_DeleteChannel` | `0x084028fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084028fc  _ZN16DB_DeleteChannel8dispatchEiiP6Stream
#           DB_DeleteChannel::dispatch(int, int, Stream*)
# range [0x084028fc, 0x084029ad]
084028fc +0x00:  push   %ebp
084028fd +0x01:  mov    %esp,%ebp
084028ff +0x03:  sub    $0x28,%esp
08402902 +0x06:  mov    0x8(%ebp),%eax
08402905 +0x09:  mov    0x14(%ebp),%edx
08402908 +0x0c:  mov    %edx,0xc(%esp)
0840290c +0x10:  mov    0x10(%ebp),%edx
0840290f +0x13:  mov    %edx,0x8(%esp)
08402913 +0x17:  mov    0xc(%ebp),%edx
08402916 +0x1a:  mov    %edx,0x4(%esp)
0840291a +0x1e:  mov    %eax,(%esp)
0840291d +0x21:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
08402922 +0x26:  xor    $0x1,%eax
08402925 +0x29:  test   %al,%al
08402927 +0x2b:  je     08402930 <+0x34>
08402929 +0x2d:  mov    $0x0,%eax
0840292e +0x32:  jmp    084029ac <+0xb0>
08402930 +0x34:  mov    0x14(%ebp),%eax
08402933 +0x37:  mov    %eax,(%esp)
08402936 +0x3a:  call   084504ec <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3102>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3102
0840293b +0x3f:  mov    %eax,-0xc(%ebp)
0840293e +0x42:  cmpl   $0x0,-0xc(%ebp)
08402942 +0x46:  jne    0840294b <+0x4f>
08402944 +0x48:  mov    $0x0,%eax
08402949 +0x4d:  jmp    084029ac <+0xb0>
0840294b +0x4f:  mov    -0xc(%ebp),%eax
0840294e +0x52:  mov    %eax,0x4(%esp)
08402952 +0x56:  mov    0x8(%ebp),%eax
08402955 +0x59:  mov    %eax,(%esp)
08402958 +0x5c:  call   084029ae <_ZN16DB_DeleteChannel13DeleteChannelEP18SIG_DELETE_CHANNEL>  ; DB_DeleteChannel::DeleteChannel(SIG_DELETE_CHANNEL*)
0840295d +0x61:  mov    %al,-0xd(%ebp)
08402960 +0x64:  movzbl -0xd(%ebp),%eax
08402964 +0x68:  xor    $0x1,%eax
08402967 +0x6b:  test   %al,%al
08402969 +0x6d:  je     08402972 <+0x76>
0840296b +0x6f:  mov    $0x0,%eax
08402970 +0x74:  jmp    084029ac <+0xb0>
08402972 +0x76:  mov    -0xc(%ebp),%eax
08402975 +0x79:  mov    %eax,0xc(%esp)
08402979 +0x7d:  mov    0x10(%ebp),%eax
0840297c +0x80:  mov    %eax,0x8(%esp)
08402980 +0x84:  mov    0xc(%ebp),%eax
08402983 +0x87:  mov    %eax,0x4(%esp)
08402987 +0x8b:  mov    0x8(%ebp),%eax
0840298a +0x8e:  mov    %eax,(%esp)
0840298d +0x91:  call   08402aec <_ZN16DB_DeleteChannel10SendResultEiiP18SIG_DELETE_CHANNEL>  ; DB_DeleteChannel::SendResult(int, int, SIG_DELETE_CHANNEL*)
08402992 +0x96:  mov    %al,-0xd(%ebp)
08402995 +0x99:  movzbl -0xd(%ebp),%eax
08402999 +0x9d:  xor    $0x1,%eax
0840299c +0xa0:  test   %al,%al
0840299e +0xa2:  je     084029a7 <+0xab>
084029a0 +0xa4:  mov    $0x0,%eax
084029a5 +0xa9:  jmp    084029ac <+0xb0>
084029a7 +0xab:  mov    $0x1,%eax
084029ac +0xb0:  leave
084029ad +0xb1:  ret
```

## 反编译 C

```c
// DB_DeleteChannel::dispatch @ 0x84028fc

/* DB_DeleteChannel::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_DeleteChannel::dispatch(DB_DeleteChannel *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  SIG_DELETE_CHANNEL *pSVar3;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pSVar3 = Stream::GetOutBuffer<SIG_DELETE_CHANNEL>(param_3);
    if (pSVar3 == (SIG_DELETE_CHANNEL *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = DeleteChannel(this,pSVar3);
      if (cVar1 == '\x01') {
        cVar1 = SendResult(this,param_1,param_2,pSVar3);
        if (cVar1 == '\x01') {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

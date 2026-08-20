# send

`_ZN5nexon4cash9TCPSocket4sendEPcj`

`nexon::cash::TCPSocket::send(char*, unsigned int)`

| 类 | 地址 |
|---|---|
| `nexon::cash::TCPSocket` | `0x081af6ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081af6ae  _ZN5nexon4cash9TCPSocket4sendEPcj
#           nexon::cash::TCPSocket::send(char*, unsigned int)
# range [0x081af6ae, 0x081af76d]
081af6ae +0x00:  push   %ebp
081af6af +0x01:  mov    %esp,%ebp
081af6b1 +0x03:  sub    $0x28,%esp
081af6b4 +0x06:  cmpl   $0x0,0xc(%ebp)
081af6b8 +0x0a:  je     081af6c0 <+0x12>
081af6ba +0x0c:  cmpl   $0x0,0x10(%ebp)
081af6be +0x10:  jne    081af6ca <+0x1c>
081af6c0 +0x12:  mov    $0xffffffff,%eax
081af6c5 +0x17:  jmp    081af76c <+0xbe>
081af6ca +0x1c:  mov    0x8(%ebp),%eax
081af6cd +0x1f:  mov    (%eax),%eax
081af6cf +0x21:  mov    0x10(%ebp),%edx
081af6d2 +0x24:  mov    %edx,0x8(%esp)
081af6d6 +0x28:  mov    0xc(%ebp),%edx
081af6d9 +0x2b:  mov    %edx,0x4(%esp)
081af6dd +0x2f:  mov    %eax,(%esp)
081af6e0 +0x32:  call   0807e830 <_init+0x1128>
081af6e5 +0x37:  mov    %eax,-0x10(%ebp)
081af6e8 +0x3a:  call   0807dd70 <_init+0x668>
081af6ed +0x3f:  mov    (%eax),%eax
081af6ef +0x41:  mov    %eax,-0xc(%ebp)
081af6f2 +0x44:  cmpl   $0x0,-0x10(%ebp)
081af6f6 +0x48:  jg     081af75f <+0xb1>
081af6f8 +0x4a:  cmpl   $0xb,-0xc(%ebp)
081af6fc +0x4e:  je     081af70a <+0x5c>
081af6fe +0x50:  cmpl   $0x4,-0xc(%ebp)
081af702 +0x54:  je     081af70a <+0x5c>
081af704 +0x56:  cmpl   $0xb,-0xc(%ebp)
081af708 +0x5a:  jne    081af741 <+0x93>
081af70a +0x5c:  mov    0x8(%ebp),%eax
081af70d +0x5f:  mov    0x1c(%eax),%eax
081af710 +0x62:  lea    0x1(%eax),%edx
081af713 +0x65:  mov    0x8(%ebp),%eax
081af716 +0x68:  mov    %edx,0x1c(%eax)
081af719 +0x6b:  mov    0x8(%ebp),%eax
081af71c +0x6e:  mov    0x1c(%eax),%eax
081af71f +0x71:  cmp    $0x64,%eax
081af722 +0x74:  setg   %al
081af725 +0x77:  test   %al,%al
081af727 +0x79:  je     081af73a <+0x8c>
081af729 +0x7b:  mov    0x8(%ebp),%eax
081af72c +0x7e:  movl   $0x0,0x1c(%eax)
081af733 +0x85:  mov    $0xffffff9c,%eax
081af738 +0x8a:  jmp    081af76c <+0xbe>
081af73a +0x8c:  mov    $0x0,%eax
081af73f +0x91:  jmp    081af76c <+0xbe>
081af741 +0x93:  cmpl   $0x0,-0xc(%ebp)
081af745 +0x97:  jne    081af74e <+0xa0>
081af747 +0x99:  mov    $0x0,%eax
081af74c +0x9e:  jmp    081af76c <+0xbe>
081af74e +0xa0:  mov    0x8(%ebp),%eax
081af751 +0xa3:  movl   $0x0,0x1c(%eax)
081af758 +0xaa:  mov    $0xffffffff,%eax
081af75d +0xaf:  jmp    081af76c <+0xbe>
081af75f +0xb1:  mov    0x8(%ebp),%eax
081af762 +0xb4:  movl   $0x0,0x1c(%eax)
081af769 +0xbb:  mov    -0x10(%ebp),%eax
081af76c +0xbe:  leave
081af76d +0xbf:  ret
```

## 反编译 C

```c
// nexon::cash::TCPSocket::send @ 0x81af6ae

/* nexon::cash::TCPSocket::send(char*, unsigned int) */

ssize_t __thiscall nexon::cash::TCPSocket::send(TCPSocket *this,char *param_1,uint param_2)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    sVar2 = -1;
  }
  else {
    sVar2 = write(*(int *)this,param_1,param_2);
    piVar3 = __errno_location();
    iVar1 = *piVar3;
    if (sVar2 < 1) {
      if (((iVar1 == 0xb) || (iVar1 == 4)) || (iVar1 == 0xb)) {
        *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
        if (*(int *)(this + 0x1c) < 0x65) {
          sVar2 = 0;
        }
        else {
          *(undefined4 *)(this + 0x1c) = 0;
          sVar2 = -100;
        }
      }
      else if (iVar1 == 0) {
        sVar2 = 0;
      }
      else {
        *(undefined4 *)(this + 0x1c) = 0;
        sVar2 = -1;
      }
    }
    else {
      *(undefined4 *)(this + 0x1c) = 0;
    }
  }
  return sVar2;
}
```

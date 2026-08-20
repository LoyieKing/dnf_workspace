# expire

`_ZN5nexon4cash11UserBalance6expireEv`

`nexon::cash::UserBalance::expire()`

| 类 | 地址 |
|---|---|
| `nexon::cash::UserBalance` | `0x081b147c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081b147c  _ZN5nexon4cash11UserBalance6expireEv
#           nexon::cash::UserBalance::expire()
# range [0x081b147c, 0x081b152f]
081b147c +0x00:  push   %ebp
081b147d +0x01:  mov    %esp,%ebp
081b147f +0x03:  sub    $0x38,%esp
081b1482 +0x06:  mov    0x8(%ebp),%eax
081b1485 +0x09:  lea    0x8(%eax),%edx
081b1488 +0x0c:  lea    -0x10(%ebp),%eax
081b148b +0x0f:  mov    %edx,0x4(%esp)
081b148f +0x13:  mov    %eax,(%esp)
081b1492 +0x16:  call   081b1678 <_GLOBAL__I__ZN5nexon4cash11UserBalance6expireEv+0x3e>  ; global constructors keyed to nexon::cash::UserBalance::expire()+0x3e
081b1497 +0x1b:  sub    $0x4,%esp
081b149a +0x1e:  jmp    081b14fc <+0x80>
081b149c +0x20:  lea    -0x10(%ebp),%eax
081b149f +0x23:  mov    %eax,(%esp)
081b14a2 +0x26:  call   081b16ee <_GLOBAL__I__ZN5nexon4cash11UserBalance6expireEv+0xb4>  ; global constructors keyed to nexon::cash::UserBalance::expire()+0xb4
081b14a7 +0x2b:  mov    (%eax),%eax
081b14a9 +0x2d:  mov    %eax,(%esp)
081b14ac +0x30:  call   081b1656 <_GLOBAL__I__ZN5nexon4cash11UserBalance6expireEv+0x1c>  ; global constructors keyed to nexon::cash::UserBalance::expire()+0x1c
081b14b1 +0x35:  test   %al,%al
081b14b3 +0x37:  je     081b14f1 <+0x75>
081b14b5 +0x39:  lea    -0x10(%ebp),%eax
081b14b8 +0x3c:  mov    %eax,(%esp)
081b14bb +0x3f:  call   081b16ee <_GLOBAL__I__ZN5nexon4cash11UserBalance6expireEv+0xb4>  ; global constructors keyed to nexon::cash::UserBalance::expire()+0xb4
081b14c0 +0x44:  mov    (%eax),%eax
081b14c2 +0x46:  mov    %eax,(%esp)
081b14c5 +0x49:  call   081b03b4 <_ZN5nexon4cash11Transaction6cancelEv>  ; nexon::cash::Transaction::cancel()
081b14ca +0x4e:  mov    0x8(%ebp),%eax
081b14cd +0x51:  lea    0x8(%eax),%ecx
081b14d0 +0x54:  lea    -0x1c(%ebp),%eax
081b14d3 +0x57:  mov    -0x10(%ebp),%edx
081b14d6 +0x5a:  mov    %edx,0x8(%esp)
081b14da +0x5e:  mov    %ecx,0x4(%esp)
081b14de +0x62:  mov    %eax,(%esp)
081b14e1 +0x65:  call   081b16f8 <_GLOBAL__I__ZN5nexon4cash11UserBalance6expireEv+0xbe>  ; global constructors keyed to nexon::cash::UserBalance::expire()+0xbe
081b14e6 +0x6a:  sub    $0x4,%esp
081b14e9 +0x6d:  mov    -0x1c(%ebp),%eax
081b14ec +0x70:  mov    %eax,-0x10(%ebp)
081b14ef +0x73:  jmp    081b14fc <+0x80>
081b14f1 +0x75:  lea    -0x10(%ebp),%eax
081b14f4 +0x78:  mov    %eax,(%esp)
081b14f7 +0x7b:  call   081b17de <_GLOBAL__I__ZN5nexon4cash11UserBalance6expireEv+0x1a4>  ; global constructors keyed to nexon::cash::UserBalance::expire()+0x1a4
081b14fc +0x80:  mov    0x8(%ebp),%eax
081b14ff +0x83:  lea    0x8(%eax),%edx
081b1502 +0x86:  lea    -0xc(%ebp),%eax
081b1505 +0x89:  mov    %edx,0x4(%esp)
081b1509 +0x8d:  mov    %eax,(%esp)
081b150c +0x90:  call   081b169c <_GLOBAL__I__ZN5nexon4cash11UserBalance6expireEv+0x62>  ; global constructors keyed to nexon::cash::UserBalance::expire()+0x62
081b1511 +0x95:  sub    $0x4,%esp
081b1514 +0x98:  lea    -0xc(%ebp),%eax
081b1517 +0x9b:  mov    %eax,0x4(%esp)
081b151b +0x9f:  lea    -0x10(%ebp),%eax
081b151e +0xa2:  mov    %eax,(%esp)
081b1521 +0xa5:  call   081b16c2 <_GLOBAL__I__ZN5nexon4cash11UserBalance6expireEv+0x88>  ; global constructors keyed to nexon::cash::UserBalance::expire()+0x88
081b1526 +0xaa:  test   %al,%al
081b1528 +0xac:  jne    081b149c <+0x20>
081b152e +0xb2:  leave
081b152f +0xb3:  ret
```

## 反编译 C

```c
// nexon::cash::UserBalance::expire @ 0x81b147c

/* nexon::cash::UserBalance::expire() */

void __thiscall nexon::cash::UserBalance::expire(UserBalance *this)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 local_20 [3];
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>::begin();
  while( true ) {
    std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>::end();
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_14,local_10);
    if (!bVar2) break;
    puVar3 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<nexon::cash::Transaction**,std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>>
             ::operator*((__normal_iterator<nexon::cash::Transaction**,std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>>
                          *)&local_14);
    cVar1 = Transaction::expired((Transaction *)*puVar3);
    if (cVar1 == '\0') {
      __gnu_cxx::
      __normal_iterator<nexon::cash::Transaction**,std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>>
      ::operator++((__normal_iterator<nexon::cash::Transaction**,std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>>
                    *)&local_14);
    }
    else {
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<nexon::cash::Transaction**,std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>>
               ::operator*((__normal_iterator<nexon::cash::Transaction**,std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>>
                            *)&local_14);
      Transaction::cancel((Transaction *)*puVar3);
      std::vector<nexon::cash::Transaction*,std::allocator<nexon::cash::Transaction*>>::erase
                (local_20,this + 8,local_14);
      local_14 = local_20[0];
    }
  }
  return;
}
```

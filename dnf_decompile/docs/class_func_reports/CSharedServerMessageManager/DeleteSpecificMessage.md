# DeleteSpecificMessage

`_ZN27CSharedServerMessageManager21DeleteSpecificMessageEi`

`CSharedServerMessageManager::DeleteSpecificMessage(int)`

| 类 | 地址 |
|---|---|
| `CSharedServerMessageManager` | `0x08600d0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08600d0c  _ZN27CSharedServerMessageManager21DeleteSpecificMessageEi
#           CSharedServerMessageManager::DeleteSpecificMessage(int)
# range [0x08600d0c, 0x08600dcb]
08600d0c +0x00:  push   %ebp
08600d0d +0x01:  mov    %esp,%ebp
08600d0f +0x03:  sub    $0x38,%esp
08600d12 +0x06:  mov    0x8(%ebp),%eax
08600d15 +0x09:  lea    0xc(%eax),%edx
08600d18 +0x0c:  lea    -0x1c(%ebp),%eax
08600d1b +0x0f:  mov    %edx,0x4(%esp)
08600d1f +0x13:  mov    %eax,(%esp)
08600d22 +0x16:  call   084f13fc <_GLOBAL__I__Z7getUserj+0x83ae>  ; global constructors keyed to getUser(unsigned int)+0x83ae
08600d27 +0x1b:  sub    $0x4,%esp
08600d2a +0x1e:  jmp    08600d97 <+0x8b>
08600d2c +0x20:  lea    -0x1c(%ebp),%eax
08600d2f +0x23:  mov    %eax,(%esp)
08600d32 +0x26:  call   08601b82 <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x1ce>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x1ce
08600d37 +0x2b:  mov    %eax,-0xc(%ebp)
08600d3a +0x2e:  mov    -0xc(%ebp),%eax
08600d3d +0x31:  movzbl 0x1(%eax),%eax
08600d41 +0x35:  movzbl %al,%eax
08600d44 +0x38:  cmp    0xc(%ebp),%eax
08600d47 +0x3b:  jne    08600d7a <+0x6e>
08600d49 +0x3d:  mov    0x8(%ebp),%eax
08600d4c +0x40:  lea    0xc(%eax),%ecx
08600d4f +0x43:  lea    -0x14(%ebp),%eax
08600d52 +0x46:  mov    -0x1c(%ebp),%edx
08600d55 +0x49:  mov    %edx,0x8(%esp)
08600d59 +0x4d:  mov    %ecx,0x4(%esp)
08600d5d +0x51:  mov    %eax,(%esp)
08600d60 +0x54:  call   08601bc0 <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x20c>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x20c
08600d65 +0x59:  sub    $0x4,%esp
08600d68 +0x5c:  mov    0x8(%ebp),%eax
08600d6b +0x5f:  movzbl 0x8(%eax),%eax
08600d6f +0x63:  lea    -0x1(%eax),%edx
08600d72 +0x66:  mov    0x8(%ebp),%eax
08600d75 +0x69:  mov    %dl,0x8(%eax)
08600d78 +0x6c:  jmp    08600dc9 <+0xbd>
08600d7a +0x6e:  lea    -0x10(%ebp),%eax
08600d7d +0x71:  movl   $0x0,0x8(%esp)
08600d85 +0x79:  lea    -0x1c(%ebp),%edx
08600d88 +0x7c:  mov    %edx,0x4(%esp)
08600d8c +0x80:  mov    %eax,(%esp)
08600d8f +0x83:  call   08601b8c <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x1d8>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x1d8
08600d94 +0x88:  sub    $0x4,%esp
08600d97 +0x8b:  mov    0x8(%ebp),%eax
08600d9a +0x8e:  lea    0xc(%eax),%edx
08600d9d +0x91:  lea    -0x18(%ebp),%eax
08600da0 +0x94:  mov    %edx,0x4(%esp)
08600da4 +0x98:  mov    %eax,(%esp)
08600da7 +0x9b:  call   084f143a <_GLOBAL__I__Z7getUserj+0x83ec>  ; global constructors keyed to getUser(unsigned int)+0x83ec
08600dac +0xa0:  sub    $0x4,%esp
08600daf +0xa3:  lea    -0x18(%ebp),%eax
08600db2 +0xa6:  mov    %eax,0x4(%esp)
08600db6 +0xaa:  lea    -0x1c(%ebp),%eax
08600db9 +0xad:  mov    %eax,(%esp)
08600dbc +0xb0:  call   08601b56 <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x1a2>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x1a2
08600dc1 +0xb5:  test   %al,%al
08600dc3 +0xb7:  jne    08600d2c <+0x20>
08600dc9 +0xbd:  leave
08600dca +0xbe:  ret
08600dcb +0xbf:  nop
```

## 反编译 C

```c
// CSharedServerMessageManager::DeleteSpecificMessage @ 0x8600d0c

/* CSharedServerMessageManager::DeleteSpecificMessage(int) */

void __thiscall
CSharedServerMessageManager::DeleteSpecificMessage(CSharedServerMessageManager *this,int param_1)

{
  bool bVar1;
  undefined4 local_20;
  __normal_iterator local_1c [4];
  undefined1 local_18 [4];
  __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
  local_14 [4];
  int local_10;
  
  std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::begin();
  while( true ) {
    std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::end();
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_20,local_1c);
    if (!bVar1) {
      return;
    }
    local_10 = __gnu_cxx::
               __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
               ::operator*((__normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
                            *)&local_20);
    if ((uint)*(byte *)(local_10 + 1) == param_1) break;
    __gnu_cxx::
    __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
    ::operator++(local_14,(int)&local_20);
  }
  std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::erase
            (local_18,this + 0xc,local_20);
  this[8] = (CSharedServerMessageManager)((char)this[8] + -1);
  return;
}
```

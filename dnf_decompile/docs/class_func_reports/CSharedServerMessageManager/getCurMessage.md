# getCurMessage

`_ZN27CSharedServerMessageManager13getCurMessageEi`

`CSharedServerMessageManager::getCurMessage(int)`

| 类 | 地址 |
|---|---|
| `CSharedServerMessageManager` | `0x08600c34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08600c34  _ZN27CSharedServerMessageManager13getCurMessageEi
#           CSharedServerMessageManager::getCurMessage(int)
# range [0x08600c34, 0x08600cc7]
08600c34 +0x00:  push   %ebp
08600c35 +0x01:  mov    %esp,%ebp
08600c37 +0x03:  sub    $0x28,%esp
08600c3a +0x06:  mov    0x8(%ebp),%eax
08600c3d +0x09:  lea    0xc(%eax),%edx
08600c40 +0x0c:  lea    -0x18(%ebp),%eax
08600c43 +0x0f:  mov    %edx,0x4(%esp)
08600c47 +0x13:  mov    %eax,(%esp)
08600c4a +0x16:  call   084f13fc <_GLOBAL__I__Z7getUserj+0x83ae>  ; global constructors keyed to getUser(unsigned int)+0x83ae
08600c4f +0x1b:  sub    $0x4,%esp
08600c52 +0x1e:  jmp    08600c93 <+0x5f>
08600c54 +0x20:  lea    -0x18(%ebp),%eax
08600c57 +0x23:  mov    %eax,(%esp)
08600c5a +0x26:  call   08601b82 <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x1ce>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x1ce
08600c5f +0x2b:  mov    %eax,-0xc(%ebp)
08600c62 +0x2e:  mov    -0xc(%ebp),%eax
08600c65 +0x31:  movzbl 0x1(%eax),%eax
08600c69 +0x35:  movzbl %al,%eax
08600c6c +0x38:  cmp    0xc(%ebp),%eax
08600c6f +0x3b:  jne    08600c76 <+0x42>
08600c71 +0x3d:  mov    -0xc(%ebp),%eax
08600c74 +0x40:  jmp    08600cc6 <+0x92>
08600c76 +0x42:  lea    -0x10(%ebp),%eax
08600c79 +0x45:  movl   $0x0,0x8(%esp)
08600c81 +0x4d:  lea    -0x18(%ebp),%edx
08600c84 +0x50:  mov    %edx,0x4(%esp)
08600c88 +0x54:  mov    %eax,(%esp)
08600c8b +0x57:  call   08601b8c <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x1d8>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x1d8
08600c90 +0x5c:  sub    $0x4,%esp
08600c93 +0x5f:  mov    0x8(%ebp),%eax
08600c96 +0x62:  lea    0xc(%eax),%edx
08600c99 +0x65:  lea    -0x14(%ebp),%eax
08600c9c +0x68:  mov    %edx,0x4(%esp)
08600ca0 +0x6c:  mov    %eax,(%esp)
08600ca3 +0x6f:  call   084f143a <_GLOBAL__I__Z7getUserj+0x83ec>  ; global constructors keyed to getUser(unsigned int)+0x83ec
08600ca8 +0x74:  sub    $0x4,%esp
08600cab +0x77:  lea    -0x14(%ebp),%eax
08600cae +0x7a:  mov    %eax,0x4(%esp)
08600cb2 +0x7e:  lea    -0x18(%ebp),%eax
08600cb5 +0x81:  mov    %eax,(%esp)
08600cb8 +0x84:  call   08601b56 <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x1a2>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x1a2
08600cbd +0x89:  test   %al,%al
08600cbf +0x8b:  jne    08600c54 <+0x20>
08600cc1 +0x8d:  mov    $0x0,%eax
08600cc6 +0x92:  leave
08600cc7 +0x93:  ret
```

## 反编译 C

```c
// CSharedServerMessageManager::getCurMessage @ 0x8600c34

/* CSharedServerMessageManager::getCurMessage(int) */

int __thiscall
CSharedServerMessageManager::getCurMessage(CSharedServerMessageManager *this,int param_1)

{
  bool bVar1;
  __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
  local_14 [4];
  int local_10;
  
  std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::begin();
  while( true ) {
    std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_18);
    if (!bVar1) {
      return 0;
    }
    local_10 = __gnu_cxx::
               __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
               ::operator*(local_1c);
    if ((uint)*(byte *)(local_10 + 1) == param_1) break;
    __gnu_cxx::
    __normal_iterator<stSERVER_MESSAGE*,std::vector<stSERVER_MESSAGE,std::allocator<stSERVER_MESSAGE>>>
    ::operator++(local_14,(int)local_1c);
  }
  return local_10;
}
```

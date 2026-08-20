# peekData

`_ZN8WongWork18CCapchaDataManager8peekDataEv`

`WongWork::CCapchaDataManager::peekData()`

| 类 | 地址 |
|---|---|
| `WongWork::CCapchaDataManager` | `0x08299f74` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08299f74  _ZN8WongWork18CCapchaDataManager8peekDataEv
#           WongWork::CCapchaDataManager::peekData()
# range [0x08299f74, 0x08299f9f]
08299f74 +0x00:  push   %ebp
08299f75 +0x01:  mov    %esp,%ebp
08299f77 +0x03:  sub    $0x18,%esp
08299f7a +0x06:  mov    0x8(%ebp),%eax
08299f7d +0x09:  mov    %eax,(%esp)
08299f80 +0x0c:  call   082ab620 <_GLOBAL__I__ZN4CLog5this_E+0x7a47>  ; global constructors keyed to CLog::this_+0x7a47
08299f85 +0x11:  mov    %eax,(%esp)
08299f88 +0x14:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08299f8d +0x19:  mov    %eax,%edx
08299f8f +0x1b:  mov    0x8(%ebp),%eax
08299f92 +0x1e:  mov    %edx,0x4(%esp)
08299f96 +0x22:  mov    %eax,(%esp)
08299f99 +0x25:  call   082b3100 <_GLOBAL__I__ZN4CLog5this_E+0xf527>  ; global constructors keyed to CLog::this_+0xf527
08299f9e +0x2a:  leave
08299f9f +0x2b:  ret
```

## 反编译 C

```c
// WongWork::CCapchaDataManager::peekData @ 0x8299f74

/* WongWork::CCapchaDataManager::peekData() */

void __thiscall WongWork::CCapchaDataManager::peekData(CCapchaDataManager *this)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = std::deque<MSG_UDP_CAPCHA_CERTIFY,std::allocator<MSG_UDP_CAPCHA_CERTIFY>>::size
                    ((deque<MSG_UDP_CAPCHA_CERTIFY,std::allocator<MSG_UDP_CAPCHA_CERTIFY>> *)this);
  uVar2 = get_rand_int(iVar1);
  std::deque<MSG_UDP_CAPCHA_CERTIFY,std::allocator<MSG_UDP_CAPCHA_CERTIFY>>::at
            ((deque<MSG_UDP_CAPCHA_CERTIFY,std::allocator<MSG_UDP_CAPCHA_CERTIFY>> *)this,uVar2);
  return;
}
```

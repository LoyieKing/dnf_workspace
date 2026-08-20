# push

`_ZN8WongWork18CCapchaDataManager4pushERK22MSG_UDP_CAPCHA_CERTIFY`

`WongWork::CCapchaDataManager::push(MSG_UDP_CAPCHA_CERTIFY const&)`

| 类 | 地址 |
|---|---|
| `WongWork::CCapchaDataManager` | `0x08299f3a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08299f3a  _ZN8WongWork18CCapchaDataManager4pushERK22MSG_UDP_CAPCHA_CERTIFY
#           WongWork::CCapchaDataManager::push(MSG_UDP_CAPCHA_CERTIFY const&)
# range [0x08299f3a, 0x08299f73]
08299f3a +0x00:  push   %ebp
08299f3b +0x01:  mov    %esp,%ebp
08299f3d +0x03:  sub    $0x18,%esp
08299f40 +0x06:  mov    0x8(%ebp),%eax
08299f43 +0x09:  mov    0xc(%ebp),%edx
08299f46 +0x0c:  mov    %edx,0x4(%esp)
08299f4a +0x10:  mov    %eax,(%esp)
08299f4d +0x13:  call   082b304e <_GLOBAL__I__ZN4CLog5this_E+0xf475>  ; global constructors keyed to CLog::this_+0xf475
08299f52 +0x18:  mov    0x8(%ebp),%eax
08299f55 +0x1b:  mov    %eax,(%esp)
08299f58 +0x1e:  call   082ab620 <_GLOBAL__I__ZN4CLog5this_E+0x7a47>  ; global constructors keyed to CLog::this_+0x7a47
08299f5d +0x23:  cmp    $0x28,%eax
08299f60 +0x26:  seta   %al
08299f63 +0x29:  test   %al,%al
08299f65 +0x2b:  je     08299f72 <+0x38>
08299f67 +0x2d:  mov    0x8(%ebp),%eax
08299f6a +0x30:  mov    %eax,(%esp)
08299f6d +0x33:  call   082b30ae <_GLOBAL__I__ZN4CLog5this_E+0xf4d5>  ; global constructors keyed to CLog::this_+0xf4d5
08299f72 +0x38:  leave
08299f73 +0x39:  ret
```

## 反编译 C

```c
// WongWork::CCapchaDataManager::push @ 0x8299f3a

/* WongWork::CCapchaDataManager::push(MSG_UDP_CAPCHA_CERTIFY const&) */

void __thiscall
WongWork::CCapchaDataManager::push(CCapchaDataManager *this,MSG_UDP_CAPCHA_CERTIFY *param_1)

{
  uint uVar1;
  
  std::deque<MSG_UDP_CAPCHA_CERTIFY,std::allocator<MSG_UDP_CAPCHA_CERTIFY>>::push_back
            ((deque<MSG_UDP_CAPCHA_CERTIFY,std::allocator<MSG_UDP_CAPCHA_CERTIFY>> *)this,param_1);
  uVar1 = std::deque<MSG_UDP_CAPCHA_CERTIFY,std::allocator<MSG_UDP_CAPCHA_CERTIFY>>::size
                    ((deque<MSG_UDP_CAPCHA_CERTIFY,std::allocator<MSG_UDP_CAPCHA_CERTIFY>> *)this);
  if (0x28 < uVar1) {
    std::deque<MSG_UDP_CAPCHA_CERTIFY,std::allocator<MSG_UDP_CAPCHA_CERTIFY>>::pop_front
              ((deque<MSG_UDP_CAPCHA_CERTIFY,std::allocator<MSG_UDP_CAPCHA_CERTIFY>> *)this);
  }
  return;
}
```

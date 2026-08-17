// Ghidra headless script (Java): dump all Hades-related functions' decompiled C.
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.program.model.address.Address;

import java.io.PrintWriter;

public class dump_hades extends GhidraScript {

    private static final long[][] TARGETS = {
        {0x8697bc6L, 0}, {0x8694f54L, 0}, {0x84b91e8L, 0}, {0x84b9200L, 0},
        {0x84b92eaL, 0}, {0x84b9322L, 0}, {0x84b9328L, 0}, {0x84b9386L, 0},
        {0x84b938cL, 0}, {0x84b93eeL, 0}, {0x84b93f4L, 0}, {0x84b93faL, 0},
        {0x84b944aL, 0}, {0x84b949aL, 0}, {0x84b953eL, 0}, {0x84b9552L, 0},
        {0x84b95a8L, 0}, {0x84b95bcL, 0}, {0x84b9718L, 0}, {0x84b9774L, 0},
        {0x84b97feL, 0}, {0x8470510L, 0}, {0x847059aL, 0}, {0x84705beL, 0},
        {0x84705feL, 0}, {0x8470628L, 0}, {0x8470682L, 0}, {0x84706beL, 0},
        {0x8470752L, 0}, {0x8470794L, 0}, {0x84707b6L, 0}, {0x84707caL, 0},
        {0x84b9ab2L, 0}, {0x863cfa6L, 0}, {0x863a760L, 0}, {0x863a7c2L, 0},
        {0x84eeca8L, 0}, {0x84e5e62L, 0}, {0x84e5f02L, 0}, {0x84eeaccL, 0},
        {0x84e4342L, 0}, {0x844fab2L, 0}, {0x8445dd4L, 0}, {0x8445aa6L, 0},
        {0x8454232L, 0}, {0x8454286L, 0}, {0x8457d48L, 0}, {0x8685418L, 0},
        {0x82a6e04L, 0}, {0x82a6e12L, 0}, {0x82a6e20L, 0}, {0x84b9946L, 0},
        {0x84b996aL, 0}, {0x84b998eL, 0}, {0x84b99b2L, 0}, {0x84b99d6L, 0},
        {0x84b99faL, 0}, {0x84b9a1eL, 0}, {0x84b9a42L, 0}, {0x84708e4L, 0},
    };

    private static final String[] LABELS = {
        "XNuclear::CHades::CHades", "XNuclear::CHades::~CHades",
        "XNuclear::CHades::Init(CUser*)", "XNuclear::CHades::Send_Login()",
        "XNuclear::CHades::Send_Logout()", "XNuclear::CHades::Send_HackType()",
        "XNuclear::CHades::AddHackTypeCnt(m,m,m,m)", "XNuclear::CHades::Send_ReturnToVillage()",
        "XNuclear::CHades::StdCateUpdate(t,t)", "XNuclear::CHades::Send_ChangeGold()",
        "XNuclear::CHades::Send_ChangeSecurity(ENUM_HADES_SECURITY)",
        "XNuclear::CHades::GoldPlus(j,ENUM_GOLD_CONTROL_REASON)",
        "XNuclear::CHades::GoldMinus(j,ENUM_GOLD_CONTROL_REASON)",
        "XNuclear::CHades::GoldTracking(h,j,Pc,j,j)", "XNuclear::CHades::ExpUp(j)",
        "XNuclear::CHades::UseFatigue(j)", "XNuclear::CHades::ChangeSecurity(ENUM_HADES_SECURITY,j)",
        "XNuclear::CHades::RunHadesAction(j,j,j,j,Pc)", "XNuclear::CHades::needLogin()",
        "XNuclear::CHades::GetIP(Pc)", "XNuclear::CHades::Send_UserStatus()",
        "CHadesServerProxy::CHadesServerProxy(Pc,i,i)", "CHadesServerProxy::HadesSvrInit()",
        "CHadesServerProxy::ConnTcpHadesSvr()", "CHadesServerProxy::IsConnect()",
        "CHadesServerProxy::InitUdp()", "CHadesServerProxy::SendHeartBeatPacket(t,i)",
        "CHadesServerProxy::SendHadesUdpPacket(Pc)", "CHadesServerProxy::SendHadesTcpPacket(Pc)",
        "CHadesServerProxy::Parsing(i)", "CHadesServerProxy::OnDisconnect()",
        "CHadesServerProxy::RunConnTimer()", "CHadesServerProxy::GetHadesSocketConnSec()",
        "Timer_HadesHeartBeat::Timer_HadesHeartBeat()", "Timer_HadesHeartBeat::dispatch_sig(i,i,j)",
        "Timer_HadesHeartBeat::registNextTimer()", "Inter_HadesAction::Inter_HadesAction()",
        "Inter_HadesAction::send_alert(CUser*,j)", "Inter_HadesAction::dispatch_sig(CUser*,Pc,i)",
        "Inter_HadesDisConnect::Inter_HadesDisConnect()", "Inter_HadesDisConnect::dispatch_sig(CUser*,Pc,i)",
        "DB_HadesPunish::DB_HadesPunish()", "DB_HadesPunish::makeRequest(j,j,j,j,j,Pc)",
        "DB_HadesPunish::dispatch(i,i,Stream*)", "Stream::GetOutBuffer<SIG_HADES_PUNISH>",
        "CStreamGuard::GetInBuffer<SIG_HADES_PUNISH>", "Stream::GetInBuffer<SIG_HADES_PUNISH>",
        "cUserHistoryLog::HadesHistoryLog(j,j,j,j)", "CEnvironment::get_udp_ip_hades()",
        "CEnvironment::get_udp_port_hades()", "CEnvironment::get_tcp_port_hades()",
        "Packet_Hades_Login ctor", "Packet_Hades_Logout ctor", "Packet_Hades_AddHackType ctor",
        "Packet_Hades_Gold_Plus ctor", "Packet_Hades_Gold_Minus ctor", "Packet_Hades_GoldTracking ctor",
        "Packet_Hades_UserStatus ctor", "Packet_Hades_StdUpdate ctor", "Packet_Hades_Udp_HeartBeat ctor",
    };

    @Override
    public void run() throws Exception {
        DecompInterface decomp = new DecompInterface();
        decomp.openProgram(currentProgram);
        PrintWriter out = new PrintWriter("/tmp/hades_decomp_all.txt", "UTF-8");
        int n = 0;
        for (int i = 0; i < TARGETS.length; i++) {
            Address a = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(TARGETS[i][0]);
            Function f = currentProgram.getFunctionManager().getFunctionAt(a);
            out.println();
            out.println("// ================= " + LABELS[i] + " @ 0x" + Long.toHexString(TARGETS[i][0]) + " =================");
            if (f == null) {
                out.println("// (no function at this address)");
                continue;
            }
            DecompileResults res = decomp.decompileFunction(f, 120, monitor);
            if (res != null && res.decompileCompleted()) {
                out.print(res.getDecompiledFunction().getC());
                n++;
            } else {
                out.println("// decompile failed");
            }
        }
        decomp.dispose();
        out.close();
        println("DUMP_HADES_OK: decompiled " + n + " functions");
    }
}

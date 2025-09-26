class SzefKuchni_Utils
{
    static vector GetSpawnOffset(Object table, float offsetX = 0.0, float offsetY = 0.8, float offsetZ = 0.0)
    {
        if (!table) return "0 0 0";
        vector tablePos = table.GetPosition();
        vector forward = table.GetDirection();
        vector right = forward.Perpend();
        forward.Normalize();
        right.Normalize();
        vector offset = (right * offsetX) + (Vector(0, offsetY, 0)) + (forward * offsetZ);
        return tablePos + offset;
    }

    static void SpawnOnTable(Object table, string type, float offsetX = -0.25, float offsetY = 0.8, float offsetZ = 0.0)
    {
        vector spawnPos = GetSpawnOffset(table, offsetX, offsetY, offsetZ);
        GetGame().CreateObject(type, spawnPos);
    }

     static void SendChatMessage(PlayerBase player, string messageID)
    {
        if (!player || !messageID) return;
        player.MessageStatus(messageID);  // NATYWNE wyświetlanie komunikatu
    }
}
